#ifndef FAHRENHEITTOCELSIUSCONVERTER_H
#define FAHRENHEITTOCELSIUSCONVERTER_H

#include "temperatureconverter.hpp"

class FahrenheitToCelsiusConverter : public TemperatureConverter {
  public:
    FahrenheitToCelsiusConverter();
    double convert(double inFahrenheit) const override;
    std::string toString() const override;
    void print() const override;
    std::string fromUnit() const override;
    std::string toUnit() const override;
    UnitConverter* clone() override;
};

#endif // FAHRENHEITTOCELSIUSCONVERTER_H
