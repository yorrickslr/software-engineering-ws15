#include "miletometerconverter.hpp"

MilesToMetersConverter::MilesToMetersConverter()
{
}

double MilesToMetersConverter::convert(double inMiles) const {
  return inMiles*1609.344;
}

std::string MilesToMetersConverter::toString() const {
  return "Miles to Meter Converter";
}

void MilesToMetersConverter::print() const {
  std::cout << toString();
}

std::string MilesToMetersConverter::fromUnit() const {
  return "Mile";
}

std::string MilesToMetersConverter::toUnit() const {
  return "Meter";
}
