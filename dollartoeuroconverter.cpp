#include "dollartoeuroconverter.hpp"

#include <string>

DollarToEuroConverter::DollarToEuroConverter()
{
}

/*In: double value of dollars
 *Out: Euro value of input dollars as of 2.11.15
 */

double DollarToEuroConverter::convert(double inputDollars) const {
  return inputDollars*0.906786;
}

std::string DollarToEuroConverter::toString() const {
  return "Dollar to Euro Converter";
}

void DollarToEuroConverter::print() const {
  std::cout << toString();
}

std::string DollarToEuroConverter::fromUnit() const {
  return "Dollar";
}

std::string DollarToEuroConverter::toUnit() const {
  return "Euro";
}
