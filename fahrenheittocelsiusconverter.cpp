#include "fahrenheittocelsiusconverter.hpp"

FahrenheitToCelsiusConverter::FahrenheitToCelsiusConverter()
{
}

double FahrenheitToCelsiusConverter::convert(double inFahrenheit) const {
  return (inFahrenheit-32.0)*(5.0/9.0);
}

std::string FahrenheitToCelsiusConverter::toString() const {
  return "Fahrenheit To Celsius Converter";
}

void FahrenheitToCelsiusConverter::print() const {
  std::cout << toString();
}

std::string FahrenheitToCelsiusConverter::fromUnit() const {
  return "Fahrenheit";
}

std::string FahrenheitToCelsiusConverter::toUnit() const {
  return "Celsius";
}
