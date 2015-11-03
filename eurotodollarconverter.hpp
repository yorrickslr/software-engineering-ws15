#ifndef EUROTODOLLARCONVERTER_H
#define EUROTODOLLARCONVERTER_H

#include "currencyconverter.hpp"

class EuroToDollarConverter : public CurrencyConverter {
  public:
    double convert(double inValue) override;
    std::string toString() override;
    void print() override;
};

#endif //EUROTODOLLARCONVERTER_H
