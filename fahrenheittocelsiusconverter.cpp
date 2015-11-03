#include <fahrenheittocelsiusconverter.hpp>

FahrenheitToCelsiusConverter::FahrenheitToCelsiusConverter(){
  
}


double FahrenheitToCelsiusConverter::convert(double inFahrenheit){
  return (inFahrenheit − 32)*(5.0/9.0);
}


std::string FahrenheitToCelsiusConverter::toString() const {
  return "Fahrenheit To Celsius Converter";
}


void FahrenheitToCelsiusConverter::print() const {
  std::cout << toString();
}
