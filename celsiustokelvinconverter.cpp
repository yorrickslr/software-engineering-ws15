#include "celsiustokelvinconverter.hpp"

CelsiusToKelvinConverter::CelsiusToKelvinConverter()
{
}

double CelsiusToKelvinConverter::convert(double inCelsius) const {
  return inCelsius + 273.15;
}

std::string CelsiusToKelvinConverter::toString() const {
  return "Celsius To Kelvin Converter";
}

void CelsiusToKelvinConverter::print() const {
  std::cout << toString();
}

std::string CelsiusToKelvinConverter::fromUnit() const {
  return "Celsius";
}

std::string CelsiusToKelvinConverter::toUnit() const {
  return "Kelvin";
}
