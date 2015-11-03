#include <celsiustokelvinconverter.hpp>

CelsiusToKelvinConverter::CelsiusToKelvinConverter(){
  
}


double CelsiusToKelvinConverter::convert(double inCelsius){
  return inCelsius*1.8 + 32;
}


std::string CelsiusToKelvinConverter::toString() const {
  return "Celsius To Kelvin Converter";
}


void CelsiusToKelvinConverter::print() const {
  std::cout << toString();
}
