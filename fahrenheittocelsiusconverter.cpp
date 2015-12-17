#include "fahrenheittocelsiusconverter.hpp"

FahrenheitToCelsiusConverter::FahrenheitToCelsiusConverter()
{
}

FahrenheitToCelsiusConverter::FahrenheitToCelsiusConverter(TemperatureConverter* converter) {
  base_ = converter;
}

double FahrenheitToCelsiusConverter::convert(double inFahrenheit) const {
  if(base_)
    inFahrenheit = base_->convert(inFahrenheit);
  return (inFahrenheit-32.0)*(5.0/9.0);
}

std::string FahrenheitToCelsiusConverter::toString() const {
  return fromUnit() + " to Celsius Converter";
}

void FahrenheitToCelsiusConverter::print() const {
  std::cout << toString();
}

std::string FahrenheitToCelsiusConverter::fromUnit() const {
  if(base_)
    return base_->fromUnit();
  return "Fahrenheit";
}

std::string FahrenheitToCelsiusConverter::toUnit() const {
  return "Celsius";
}

UnitConverter* FahrenheitToCelsiusConverter::clone() {
  return new FahrenheitToCelsiusConverter;
}