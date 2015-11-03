#ifndef CELSIUSTOKELVINCONVERTER_H
#define CELSIUSTOKELVINCONVERTER_H

#include "temperatureconverter.hpp"

class CelsiusToKelvinConverter : public TemperatureConverter {
  public:
    CelsiusToKelvinConverter();
    double convert(double inCelsius);
    std::string toString() const;
    void print() const;
};

#endif // CELSIUSTOKELVINCONVERTER_H
