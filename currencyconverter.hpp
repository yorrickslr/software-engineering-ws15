#ifndef CURRENCYCONVERTER_H
#define CURRENCYCONVERTER_H

#include "unitconverter.hpp"

class CurrencyConverter : public UnitConverter {
  public:
    CurrencyConverter();
    virtual double convert(double inValue) = 0;
    virtual std::string toString() = 0;
    virtual void print() = 0;
};

#endif // CURRENCYCONVERTER_H
