#include "dollartoyenconverter.hpp"

DollarToYenConverter::DollarToYenConverter()
{
  CurrencyDecorator{this};
}

double DollarToYenConverter::convert(double toYen) const {
  return toYen * 120.684499;
}

std::string DollarToYenConverter::toString() const {
  return "Dollar to Yen converter";
}

void DollarToYenConverter::print() const {
  std::cout << toString();
}

std::string DollarToYenConverter::fromUnit() const {
  return "Dollar";
}

std::string DollarToYenConverter::toUnit() const {
  return "Yen";
}

UnitConverter* DollarToYenConverter::clone() {
  return new DollarToYenConverter;
}
