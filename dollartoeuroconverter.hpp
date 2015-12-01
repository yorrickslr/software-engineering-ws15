#ifndef DOLLARTOEUROCONVERTER_H
#define DOLLARTOEUROCONVERTER_H

#include "currencyconverter.hpp"

class DollarToEuroConverter : public CurrencyConverter
{
  public:
    DollarToEuroConverter();
    double convert(double inDollars) const override;
    std::string toString() const override;
    void print() const override;
    std::string fromUnit() const override;
    std::string toUnit() const override;
    UnitConverter* clone() override;
};

#endif // DOLLARTOEUROCONVERTER_H
