#include "miletometerconverter.hpp"

MilesToMeterConverter::MilesToMeterConverter()
{
}

MilesToMeterConverter::MilesToMeterConverter(LengthConverter* converter) {
  base_ = converter;
}

MilesToMeterConverter::MilesToMeterConverter(Inversion* converter) {
  base_ = converter;
}

double MilesToMeterConverter::convert(double inMiles) const {
  if(base_)
    inMiles = base_->convert(inMiles);
  return inMiles*1609.344;
}

std::string MilesToMeterConverter::toString() const {
  return fromUnit() + " to Meter Converter";
}

void MilesToMeterConverter::print() const {
  std::cout << toString();
}

std::string MilesToMeterConverter::fromUnit() const {
  if(base_)
    return base_->fromUnit();
  return "Mile";
}

std::string MilesToMeterConverter::toUnit() const {
  return "Meter";
}

UnitConverter* MilesToMeterConverter::clone() {
  return new MilesToMeterConverter;
}
