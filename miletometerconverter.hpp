#ifndef MILETOMETERCONVERTER_H
#define MILETOMETERCONVERTER_H

#include "lengthconverter.hpp"

class MilesToMetersConverter : public LengthConverter {
  public:
    MilesToMetersConverter();
    double convert(double inMiles) override;
    std::string toString() const override;
    void print() const override;
};

#endif // MILETOMETERCONVERTER_H
