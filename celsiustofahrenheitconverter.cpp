#include "celsiustofahrenheitconverter.hpp"

CelsiusToFahrenheitConverter::CelsiusToFahrenheitConverter()
{
}


double CelsiusToFahrenheitConverter::convert(double inCelsius){
  return inCelsius*1.8 + 32;
}


std::string CelsiusToFahrenheitConverter::toString() const {
  return "Celsius To Fahrenheit Converter";
}


void CelsiusToFahrenheitConverter::print() const {
  std::cout << toString();
}
