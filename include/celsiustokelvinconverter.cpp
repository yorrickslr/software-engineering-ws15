#include "celsiustokelvinconverter.hpp"

CelsiusToKelvinConverter::CelsiusToKelvinConverter()
{
  base_ = nullptr;
}

CelsiusToKelvinConverter::CelsiusToKelvinConverter(TemperatureConverter* converter) {
  base_ = converter;
}

double CelsiusToKelvinConverter::convert(double inCelsius) const {
  if (-273 > inCelsius) {
    throw std::logic_error("Congratz! You went below absolute zero. We hope, you are proud of yourself!");
  }
  if(base_)
    inCelsius = base_->convert(inCelsius);
  return inCelsius + 273.15;
}

std::string CelsiusToKelvinConverter::toString() const {
  return fromUnit() + " to Kelvin Converter";
}

void CelsiusToKelvinConverter::print() const {
  std::cout << toString();
}

std::string CelsiusToKelvinConverter::fromUnit() const {
  if(base_)
    return base_->fromUnit();
  return "Celsius";
}

std::string CelsiusToKelvinConverter::toUnit() const {
  return "Kelvin";
}

UnitConverter* CelsiusToKelvinConverter::clone() {
  return new CelsiusToKelvinConverter;
}
