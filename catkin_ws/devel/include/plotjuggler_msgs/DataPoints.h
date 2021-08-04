// Generated by gencpp from file plotjuggler_msgs/DataPoints.msg
// DO NOT EDIT!


#ifndef PLOTJUGGLER_MSGS_MESSAGE_DATAPOINTS_H
#define PLOTJUGGLER_MSGS_MESSAGE_DATAPOINTS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <plotjuggler_msgs/DataPoint.h>

namespace plotjuggler_msgs
{
template <class ContainerAllocator>
struct DataPoints_
{
  typedef DataPoints_<ContainerAllocator> Type;

  DataPoints_()
    : dictionary_uuid(0)
    , samples()  {
    }
  DataPoints_(const ContainerAllocator& _alloc)
    : dictionary_uuid(0)
    , samples(_alloc)  {
  (void)_alloc;
    }



   typedef uint32_t _dictionary_uuid_type;
  _dictionary_uuid_type dictionary_uuid;

   typedef std::vector< ::plotjuggler_msgs::DataPoint_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::plotjuggler_msgs::DataPoint_<ContainerAllocator> >::other >  _samples_type;
  _samples_type samples;





  typedef boost::shared_ptr< ::plotjuggler_msgs::DataPoints_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::plotjuggler_msgs::DataPoints_<ContainerAllocator> const> ConstPtr;

}; // struct DataPoints_

typedef ::plotjuggler_msgs::DataPoints_<std::allocator<void> > DataPoints;

typedef boost::shared_ptr< ::plotjuggler_msgs::DataPoints > DataPointsPtr;
typedef boost::shared_ptr< ::plotjuggler_msgs::DataPoints const> DataPointsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::plotjuggler_msgs::DataPoints_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::plotjuggler_msgs::DataPoints_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::plotjuggler_msgs::DataPoints_<ContainerAllocator1> & lhs, const ::plotjuggler_msgs::DataPoints_<ContainerAllocator2> & rhs)
{
  return lhs.dictionary_uuid == rhs.dictionary_uuid &&
    lhs.samples == rhs.samples;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::plotjuggler_msgs::DataPoints_<ContainerAllocator1> & lhs, const ::plotjuggler_msgs::DataPoints_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace plotjuggler_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::plotjuggler_msgs::DataPoints_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::plotjuggler_msgs::DataPoints_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::plotjuggler_msgs::DataPoints_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::plotjuggler_msgs::DataPoints_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::plotjuggler_msgs::DataPoints_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::plotjuggler_msgs::DataPoints_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::plotjuggler_msgs::DataPoints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "14e65e7956023a9a11291bc53d5d695a";
  }

  static const char* value(const ::plotjuggler_msgs::DataPoints_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x14e65e7956023a9aULL;
  static const uint64_t static_value2 = 0x11291bc53d5d695aULL;
};

template<class ContainerAllocator>
struct DataType< ::plotjuggler_msgs::DataPoints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "plotjuggler_msgs/DataPoints";
  }

  static const char* value(const ::plotjuggler_msgs::DataPoints_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::plotjuggler_msgs::DataPoints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 dictionary_uuid\n"
"plotjuggler_msgs/DataPoint[] samples\n"
"\n"
"================================================================================\n"
"MSG: plotjuggler_msgs/DataPoint\n"
"uint16 name_index\n"
"float64 stamp\n"
"float64 value\n"
;
  }

  static const char* value(const ::plotjuggler_msgs::DataPoints_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::plotjuggler_msgs::DataPoints_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.dictionary_uuid);
      stream.next(m.samples);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DataPoints_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::plotjuggler_msgs::DataPoints_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::plotjuggler_msgs::DataPoints_<ContainerAllocator>& v)
  {
    s << indent << "dictionary_uuid: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.dictionary_uuid);
    s << indent << "samples[]" << std::endl;
    for (size_t i = 0; i < v.samples.size(); ++i)
    {
      s << indent << "  samples[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::plotjuggler_msgs::DataPoint_<ContainerAllocator> >::stream(s, indent + "    ", v.samples[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLOTJUGGLER_MSGS_MESSAGE_DATAPOINTS_H