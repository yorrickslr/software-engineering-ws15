#include "eurotodollarconverter.hpp"

EuroToDollarConverter::EuroToDollarConverter()
{
}

double EuroToDollarConverter::convert(double inValue) const {
  return inValue * 1.102796;
}

std::string EuroToDollarConverter::toString() const {
  return "Euro to Dollar Converter";
}

void EuroToDollarConverter::print() const {
  std::cout << toString();
}

std::string EuroToDollarConverter::fromUnit() const {
  return "Euro";
}

std::string EuroToDollarConverter::toUnit() const {
  return "Dollar";
}

UnitConverter* EuroToDollarConverter::clone() {
  return new EuroToDollarConverter;
}