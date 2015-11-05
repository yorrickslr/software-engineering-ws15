#ifndef CELSIUSTOKELVINCONVERTER_H
#define CELSIUSTOKELVINCONVERTER_H

#include "temperatureconverter.hpp"

class CelsiusToKelvinConverter : public TemperatureConverter {
  public:
    CelsiusToKelvinConverter();
    double convert(double inCelsius) override;
    std::string toString() const override;
    void print() const override;
    std::string fromUnit() const override;
    std::string toUnit() const override;
};

#endif // CELSIUSTOKELVINCONVERTER_H
