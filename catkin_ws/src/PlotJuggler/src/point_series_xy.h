#ifndef POINT_SERIES_H
#define POINT_SERIES_H

#include "timeseries_qwt.h"

class PointSeriesXY : public QwtSeriesWrapper
{
public:
  PointSeriesXY(const PlotData* x_axis, const PlotData* y_axis);

  virtual QPointF sample(size_t i) const override
  {
    const auto& p = _cached_curve.at(i);
    return QPointF(p.x, p.y);
  }

  size_t size() const override;

  nonstd::optional<QPointF> sampleFromTime(double t) override;

  RangeOpt getVisualizationRangeY(Range range_X) override;

  bool updateCache(bool reset_old_data) override;

  RangeOpt getVisualizationRangeX() override;

  const PlotData* dataX() const
  {
    return _x_axis;
  }
  const PlotData* dataY() const
  {
    return _y_axis;
  }

protected:
  const PlotData* _x_axis;
  const PlotData* _y_axis;
  PlotDataBase<double> _cached_curve;
};

#endif  // POINT_SERIES_H
