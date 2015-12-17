#ifndef DOLLARTOYENCONVERTER_H
#define DOLLARTOYENCONVERTER_H

#include "currencyconverter.hpp"
#include "inversion.hpp"

class DollarToYenConverter : public CurrencyConverter {
  public:
    DollarToYenConverter();
    DollarToYenConverter(CurrencyConverter* converter);
    DollarToYenConverter(Inversion* converter);
    double convert(double toYen) const override;
    std::string toString() const override;
    void print() const override;
    std::string fromUnit() const override;
    std::string toUnit() const override;
    UnitConverter* clone() override;
};

#endif // DOLLARTOYENCONVERTER_H
