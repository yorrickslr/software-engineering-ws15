#ifndef MILETOMETERCONVERTER_H
#define MILETOMETERCONVERTER_H

#include "lengthconverter.hpp"
#include "inversion.hpp"

class MilesToMeterConverter : public LengthConverter {
  public:
    MilesToMeterConverter();
    MilesToMeterConverter(LengthConverter* converter);
    MilesToMeterConverter(Inversion* converter);
    double convert(double inMiles) const override;
    std::string toString() const override;
    void print() const override;
    std::string fromUnit() const override;
    std::string toUnit() const override;
    UnitConverter* clone() override;
};

#endif // MILETOMETERCONVERTER_H
