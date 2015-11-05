#ifndef EUROTODOLLARCONVERTER_H
#define EUROTODOLLARCONVERTER_H

#include "currencyconverter.hpp"

class EuroToDollarConverter : public CurrencyConverter {
  public:
    EuroToDollarConverter();
    double convert(double inValue) override;
    std::string toString() const override;
    void print() const override;
    std::string fromUnit() const override;
    std::string toUnit() const override;
};

#endif //EUROTODOLLARCONVERTER_H
