#include "dollartoeuroconverter.hpp"

DollarToEuroConverter::DollarToEuroConverter()
{
  std::cout << "***DEBUG*** nullptr?" << std::endl;
  CurrencyDecorator{this};
}


/*In: double value of dollars
 *Out: Euro value of input dollars as of 2.11.15
 */

double DollarToEuroConverter::convert(double inputDollars) const {
  return CurrencyDecorator::convert(inputDollars)*0.906786;
}

std::string DollarToEuroConverter::toString() const {
  return "Dollar to " + CurrencyDecorator::toString();
}

void DollarToEuroConverter::print() const {
  std::cout << toString();
}

std::string DollarToEuroConverter::fromUnit() const {
  return CurrencyDecorator::fromUnit();
}

std::string DollarToEuroConverter::toUnit() const {
  return "Euro";
}

UnitConverter* DollarToEuroConverter::clone() {
  return new DollarToEuroConverter;
}
