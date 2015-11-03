#ifndef FAHRENHEITTOCELSIUSCONVERTER_H
#define FAHRENHEITTOCELSIUSCONVERTER_H

#include "temperatureconverter.hpp"

class FahrenheitToCelsiusConverter : public TemperatureConverter {
  public:
    FahrenheitToCelsiusConverter();
    double convert(double inFahrenheit);
    std::string toString() const;
    void print() const;
};

#endif // FAHRENHEITTOCELSIUSCONVERTER_H
