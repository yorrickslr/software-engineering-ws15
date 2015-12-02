#include "yardtometerconverter.hpp"

YardToMeterConverter::YardToMeterConverter()
{
}

double YardToMeterConverter::convert(double inYard) const {
  return inYard*0.9144;
}

std::string YardToMeterConverter::toString() const {
  return "Yard to Meter Converter";
}

void YardToMeterConverter::print() const {
  std::cout << toString();
}

std::string YardToMeterConverter::fromUnit() const {
  return "Yard";
}

std::string YardToMeterConverter::toUnit() const {
  return "Meter";
}

UnitConverter* YardToMeterConverter::clone() {
  return new YardToMeterConverter;
}
