#ifndef YARDTOMETERCONVERTER_H
#define YARDTOMETERCONVERTER_H

#include "lengthconverter.hpp"

class YardsToMetersConverter : public LengthConverter {
  public:
    YardsToMetersConverter();
    double convert(double inYards) const override;
    std::string toString() const override;
    void print() const override;
    std::string fromUnit() const override;
    std::string toUnit() const override;
    UnitConverter* clone() override;
};

#endif // YARDTOMETERCONVERTER_H
