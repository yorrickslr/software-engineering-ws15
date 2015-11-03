#ifndef YARDTOMETERCONVERTER_H
#define YARDTOMETERCONVERTER_H

#include "lengthconverter.hpp"

class YardsToMetersConverter : public LengthConverter {
  public:
    YardsToMetersConverter();
    double convert(double inYards);
    std::string toString() const;
    void print() const;
};

#endif // YARDTOMETERCONVERTER_H
