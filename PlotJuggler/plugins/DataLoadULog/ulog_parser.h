#pragma once

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string.h>

#include "string_view.hpp"

typedef nonstd::string_view StringView;

class ULogParser
{
public:
  enum FormatType
  {
    UINT8,
    UINT16,
    UINT32,
    UINT64,
    INT8,
    INT16,
    INT32,
    INT64,
    FLOAT,
    DOUBLE,
    BOOL,
    CHAR,
    OTHER
  };

  struct Field
  {
    Field() : array_size(1)
    {
    }
    FormatType type;
    std::string field_name;
    std::string other_type_ID;
    int array_size;
  };

  struct Parameter
  {
    std::string name;
    union
    {
      int32_t val_int;
      float val_real;
    } value;
    FormatType val_type;
  };

  struct Format
  {
    Format() : padding(0)
    {
    }
    std::string name;
    std::vector<Field> fields;
    int padding;
  };

  struct MessageLog
  {
    char level;
    uint64_t timestamp;
    std::string msg;
  };

  struct Subscription
  {
    Subscription() : msg_id(0), multi_id(0), format(nullptr)
    {
    }

    uint16_t msg_id;
    uint8_t multi_id;
    std::string message_name;
    const Format* format;
  };

  struct Timeseries
  {
    std::vector<uint64_t> timestamps;
    std::vector<std::pair<std::string, std::vector<double>>> data;
  };

public:
  ULogParser(const std::string& filename);

  const std::map<std::string, Timeseries>& getTimeseriesMap() const;

  const std::vector<Parameter>& getParameters() const;

  const std::map<std::string, std::string>& getInfo() const;

  const std::vector<MessageLog>& getLogs() const;

private:
  struct DataStream
  {
    DataStream(): offset(0) {}

    std::vector<char> data;
    size_t offset;

    void read(char* dst, int len)
    {
      memcpy(dst, &data[offset], len);
      offset += len;
    }

    operator bool() {
        return offset < data.size();
    }
  };

  bool readFileHeader(DataStream& datastream);

  bool readFileDefinitions(DataStream& datastream);

  bool readFormat(DataStream& datastream, uint16_t msg_size);

  bool readFlagBits(DataStream& datastream, uint16_t msg_size);

  bool readInfo(DataStream& datastream, uint16_t msg_size);

  bool readParameter(DataStream& datastream, uint16_t msg_size);

  bool readSubscription(DataStream& datastream, uint16_t msg_size);

  size_t fieldsCount(const Format& format) const;

  Timeseries createTimeseries(const Format* format);

  uint64_t _file_start_time;

  std::vector<Parameter> _parameters;

  std::vector<uint8_t> _read_buffer;

  std::streampos _data_section_start;  ///< first ADD_LOGGED_MSG message

  int64_t _read_until_file_position = 1ULL << 60;  ///< read limit if log contains appended data

  std::set<std::string> _overridden_params;

  std::map<std::string, Format> _formats;

  std::map<std::string, std::string> _info;

  std::map<uint16_t, Subscription> _subscriptions;

  std::map<std::string, Timeseries> _timeseries;

  std::vector<StringView> splitString(const StringView& strToSplit, char delimeter);

  std::set<std::string> _message_name_with_multi_id;

  std::vector<MessageLog> _message_logs;

  void parseDataMessage(const Subscription& sub, char* message);

  char* parseSimpleDataMessage(Timeseries& timeseries, const Format* format, char* message, size_t* index);
};

