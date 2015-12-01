#ifndef MILETOMETERCONVERTER_H
#define MILETOMETERCONVERTER_H

#include "lengthconverter.hpp"

class MilesToMetersConverter : public LengthConverter {
  public:
    MilesToMetersConverter();
    double convert(double inMiles) const override;
    std::string toString() const override;
    void print() const override;
    std::string fromUnit() const override;
    std::string toUnit() const override;
    UnitConverter* clone() override;
};

#endif // MILETOMETERCONVERTER_H
