#ifndef FAHRENHEITTOCELSIUSCONVERTER_H
#define FAHRENHEITTOCELSIUSCONVERTER_H

#include "temperatureconverter.hpp"

class FahrenheitToCelsiusConverter : public TemperatureConverter {
  public:
    FahrenheitToCelsiusConverter();
    double convert(double inFahrenheit) override;
    std::string toString() const override;
    void print() const override;
    std::string fromUnit() const override;
    std::string toUnit() const override;
};

#endif // FAHRENHEITTOCELSIUSCONVERTER_H
