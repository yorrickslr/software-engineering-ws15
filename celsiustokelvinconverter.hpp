#ifndef CELSIUSTOKELVINCONVERTER_H
#define CELSIUSTOKELVINCONVERTER_H

#include "temperatureconverter.hpp"

class CelsiusToKelvinConverter : public TemperatureConverter {
  public:
    CelsiusToKelvinConverter();
    double convert(double inCelsius) const override;
    std::string toString() const override;
    void print() const override;
    std::string fromUnit() const override;
    std::string toUnit() const override;
    UnitConverter* clone() override;
};

#endif // CELSIUSTOKELVINCONVERTER_H
