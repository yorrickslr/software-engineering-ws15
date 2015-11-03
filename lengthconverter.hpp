#ifndef LENGTHCONVERTER_H
#define LENGTHCONVERTER_H

#include "unitconverter.hpp"

class LengthConverter : public UnitConverter {
  public:
    LengthConverter();
    virtual double convert(double inValue) = 0;
    virtual std::string toString() = 0;
    virtual void print() = 0;
};

#endif // LENGTHCONVERTER_H