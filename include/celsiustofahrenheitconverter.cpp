#include "celsiustofahrenheitconverter.hpp"

CelsiusToFahrenheitConverter::CelsiusToFahrenheitConverter()
{
}

CelsiusToFahrenheitConverter::CelsiusToFahrenheitConverter(TemperatureConverter* converter) {
  base_ = converter;
}

double CelsiusToFahrenheitConverter::convert(double inCelsius) const {
  if(base_)
    inCelsius = base_->convert(inCelsius);
  return inCelsius*1.8 + 32;
}

std::string CelsiusToFahrenheitConverter::toString() const {
  return fromUnit() + " to Fahrenheit Converter";
}

void CelsiusToFahrenheitConverter::print() const {
  std::cout << toString();
}

std::string CelsiusToFahrenheitConverter::fromUnit() const {
  if(base_)
    return base_->fromUnit();
  return "Celsius";
}

std::string CelsiusToFahrenheitConverter::toUnit() const {
  return "Fahrenheit";
}

UnitConverter* CelsiusToFahrenheitConverter::clone() {
  return new CelsiusToFahrenheitConverter;
}