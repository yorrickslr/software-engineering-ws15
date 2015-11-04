#ifndef DOLLARTOYENCONVERTER_H
#define DOLLARTOYENCONVERTER_H

#include "currencyconverter.hpp"

class DollarToYenConverter : public CurrencyConverter {
  public:
    DollarToYenConverter();
    double convert(double toYen) override;
    std::string toString() const override;
    void print() const override;
};

#endif // DOLLARTOYENCONVERTER_H
