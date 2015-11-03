#ifndef TEMPERATURECONVERTER_H
#define TEMPERATURECONVERTER_H

#include "unitconverter.hpp"

class TepmeratureConverter : public UnitConverter {
  public:
    TepmeratureConverter();
    virtual double convert(double inValue) = 0;
    virtual std::string toString() = 0;
    virtual void print() = 0;
};

#endif // TEMPERATURECONVERTER_H
