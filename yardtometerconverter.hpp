#ifndef YARDTOMETERCONVERTER_H
#define YARDTOMETERCONVERTER_H

#include "lengthconverter.hpp"

class YardsToMetersConverter : public LengthConverter {
  public:
    YardsToMetersConverter();
    double convert(double inYards) override;
    std::string toString() const override;
    void print() const override;
};

#endif // YARDTOMETERCONVERTER_H
