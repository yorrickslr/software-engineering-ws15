#ifndef EUROTODOLLARCONVERTER_H
#define EUROTODOLLARCONVERTER_H

#include "currencydecorator.hpp"
#include "currencyconverter.hpp"

class EuroToDollarConverter : public CurrencyDecorator, public CurrencyConverter {
  public:
    EuroToDollarConverter();
    EuroToDollarConverter(CurrencyConverter* converter) :
      CurrencyDecorator{converter}
    {}     
    double convert(double inValue) const override;
    std::string toString() const override;
    void print() const override;
    std::string fromUnit() const override;
    std::string toUnit() const override;
    UnitConverter* clone() override;
};

#endif //EUROTODOLLARCONVERTER_H
