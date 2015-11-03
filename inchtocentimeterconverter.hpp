#ifndef INCHTOCENTIMETERCONVERTER_H
#define INCHTOCENTIMETERCONVERTER_H

#include "lengthconverter.hpp"

class InchToCentimetersConverter : public LengthConverter {
  public:
    InchToCentimetersConverter();
    double convert(double inInch);
    std::string toString() const;
    void print() const;
};

#endif // INCHTOCENTIMETERCONVERTER_H
