#ifndef DOLLARTOYENCONVERTER_H
#define DOLLARTOYENCONVERTER_H

#include "currencydecorator.hpp"
#include "currencyconverter.hpp"

class DollarToYenConverter : public CurrencyDecorator, public CurrencyConverter {
  public:
    DollarToYenConverter();
    DollarToYenConverter(CurrencyConverter* converter) :
      CurrencyDecorator{converter} {}
    double convert(double toYen) const override;
    std::string toString() const override;
    void print() const override;
    std::string fromUnit() const override;
    std::string toUnit() const override;
    UnitConverter* clone() override;
};

#endif // DOLLARTOYENCONVERTER_H
