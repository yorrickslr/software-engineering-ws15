#ifndef INCHTOCENTIMETERCONVERTER_H
#define INCHTOCENTIMETERCONVERTER_H

#include "lengthconverter.hpp"
#include "lengthdecorator.hpp"

class InchToCentimeterConverter : public LengthConverter, public LengthDecorator {
  public:
    InchToCentimeterConverter();
    double convert(double inInch) const override;
    std::string toString() const override;
    void print() const override;
    std::string fromUnit() const override;
    std::string toUnit() const override;
    UnitConverter* clone() override;
};

#endif // INCHTOCENTIMETERCONVERTER_H
