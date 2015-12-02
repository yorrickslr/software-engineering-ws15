#include "miletometerconverter.hpp"

MilesToMeterConverter::MilesToMeterConverter()
{
}

double MilesToMeterConverter::convert(double inMiles) const {
  return inMiles*1609.344;
}

std::string MilesToMeterConverter::toString() const {
  return "Miles to Meter Converter";
}

void MilesToMeterConverter::print() const {
  std::cout << toString();
}

std::string MilesToMeterConverter::fromUnit() const {
  return "Mile";
}

std::string MilesToMeterConverter::toUnit() const {
  return "Meter";
}

UnitConverter* MilesToMeterConverter::clone() {
  return new MilesToMeterConverter;
}
