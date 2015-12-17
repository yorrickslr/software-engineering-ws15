#ifndef EUROTODOLLARCONVERTER_H
#define EUROTODOLLARCONVERTER_H

#include "currencyconverter.hpp"
#include "inversion.hpp"

class EuroToDollarConverter : public CurrencyConverter {
  public:
    EuroToDollarConverter();
    EuroToDollarConverter(CurrencyConverter* converter);
    EuroToDollarConverter(Inversion* converter);
    double convert(double inValue) const override;
    std::string toString() const override;
    void print() const override;
    std::string fromUnit() const override;
    std::string toUnit() const override;
    UnitConverter* clone() override;
};

#endif //EUROTODOLLARCONVERTER_H
