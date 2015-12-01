#ifndef TEMPERATURECONVERTER_H
#define TEMPERATURECONVERTER_H

#include "unitconverter.hpp"

class TemperatureConverter : public UnitConverter {
  public:
    TemperatureConverter();
    virtual double convert(double inValue) const = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
    virtual std::string fromUnit() const = 0;
    virtual std::string toUnit() const = 0;
};

#endif // TEMPERATURECONVERTER_H
