#ifndef DOLLARTOEUROCONVERTER_H
#define DOLLARTOEUROCONVERTER_H

#include "currencyconverter.hpp"

class DollarToEuroConverter : public CurrencyConverter
{
  public:
    DollarToEuroConverter();
    double convert(double inDollars) override;
    std::string toString() const override;
    void print() const override;
    std::string fromUnit() const override;
    std::string toUnit() const override;
};

#endif // DOLLARTOEUROCONVERTER_H
