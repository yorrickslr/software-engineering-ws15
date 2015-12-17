#ifndef INVERSION_DECORATOR_H
#define INVERSION_DECORATOR_H

#include "currencyconverter.hpp"
#include "lengthconverter.hpp"

class Inversion : public UnitConverter {
  public:
    Inversion();
    Inversion(CurrencyConverter* converter);
    Inversion(LengthConverter* converter);
    Inversion(Inversion* converter);
    double convert(double input) const override;
    std::string toString() const override;
    void print() const override;
    std::string fromUnit() const override;
    std::string toUnit() const override;
    UnitConverter* clone();
};

#endif
