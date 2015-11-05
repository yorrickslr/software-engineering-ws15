#include "dollartoyenconverter.hpp"

DollarToYenConverter::DollarToYenConverter()
{
}

double DollarToYenConverter::convert(double toYen) {
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
