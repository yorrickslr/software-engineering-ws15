#ifndef INCHTOCENTIMETERCONVERTER_H
#define INCHTOCENTIMETERCONVERTER_H

#include "lengthconverter.hpp"

class InchToCentimetersConverter : public LengthConverter {
  public:
    InchToCentimetersConverter();
    double convert(double inInch) override;
    std::string toString() const override;
    void print() const override;
};

#endif // INCHTOCENTIMETERCONVERTER_H
