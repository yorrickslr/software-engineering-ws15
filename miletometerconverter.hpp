#ifndef MILETOMETERCONVERTER_H
#define MILETOMETERCONVERTER_H

#include "lengthconverter.hpp"

class MilesToMetersConverter : public LengthConverter {
  public:
    MilesToMetersConverter();
    double convert(double inMiles);
    std::string toString() const;
    void print() const;
};

#endif // MILETOMETERCONVERTER_H
