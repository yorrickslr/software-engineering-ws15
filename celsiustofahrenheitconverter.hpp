#ifndef CELSIUSTOFAHRENHEITCONVERTER_H
#define CELSIUSTOFAHRENHEITCONVERTER_H

#include "temperatureconverter.hpp"

class CelsiusToFahrenheitConverter : public TemperatureConverter {
  public:
    CelsiusToFahrenheitConverter();
    double convert(double inCelsius) override;
    std::string toString() const override;
    void print() const override;
    std::string fromUnit() const override;
    std::string toUnit() const override;
};

#endif // CELSIUSTOFAHRENHEITCONVERTER_H
