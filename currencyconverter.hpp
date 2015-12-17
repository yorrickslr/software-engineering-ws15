#ifndef CURRENCYCONVERTER_H
#define CURRENCYCONVERTER_H

#include "unitconverter.hpp"

class CurrencyConverter : public UnitConverter {
  public:
    CurrencyConverter();
    virtual double convert(double inValue) const = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
    virtual std::string fromUnit() const = 0;
    virtual std::string toUnit() const = 0;
    virtual UnitConverter* clone() = 0;
};

#endif // CURRENCYCONVERTER_H
