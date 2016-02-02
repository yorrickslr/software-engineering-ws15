#ifndef CELSIUSTOFAHRENHEITCONVERTER_H
#define CELSIUSTOFAHRENHEITCONVERTER_H

#include "temperatureconverter.hpp"
#include <exception>

class CelsiusToFahrenheitConverter : public TemperatureConverter {
  public:
    CelsiusToFahrenheitConverter();
    CelsiusToFahrenheitConverter(TemperatureConverter* converter);
    double convert(double inCelsius) const override;
    std::string toString() const override;
    void print() const override;
    std::string fromUnit() const override;
    std::string toUnit() const override;
    UnitConverter* clone() override;
};

#endif // CELSIUSTOFAHRENHEITCONVERTER_H
