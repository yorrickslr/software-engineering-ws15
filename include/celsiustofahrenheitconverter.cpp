#include "celsiustofahrenheitconverter.hpp"

CelsiusToFahrenheitConverter::CelsiusToFahrenheitConverter()
{
  base_ = nullptr;
}

CelsiusToFahrenheitConverter::CelsiusToFahrenheitConverter(TemperatureConverter* converter) {
  base_ = converter;
}

double CelsiusToFahrenheitConverter::convert(double inCelsius) const {
  if (-273 > inCelsius) {
    throw std::logic_error("Congratz! You went below absolute zero. We hope, you are proud of yourself!");
  }
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
