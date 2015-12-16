#ifndef DOLLARTOEUROCONVERTER_H
#define DOLLARTOEUROCONVERTER_H

#include "currencydecorator.hpp"
#include "currencyconverter.hpp"

class DollarToEuroConverter : public CurrencyDecorator, public CurrencyConverter {
  public:
    DollarToEuroConverter();
    DollarToEuroConverter(CurrencyConverter* converter) :
      CurrencyDecorator{converter} {}
    double convert(double inDollars) const override;
    std::string toString() const override;
    void print() const override;
    std::string fromUnit() const override;
    std::string toUnit() const override;
    UnitConverter* clone() override;
};

#endif // DOLLARTOEUROCONVERTER_H
