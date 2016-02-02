#include "yardtometerconverter.hpp"

YardToMeterConverter::YardToMeterConverter()
{
  base_ = nullptr;
}

YardToMeterConverter::YardToMeterConverter(LengthConverter* converter) {
  base_ = converter;
}

YardToMeterConverter::YardToMeterConverter(Inversion* converter) {
  // quite ugly way to prevent other types of inversions
  if(converter->fromUnit()!="Centimeter" 
    && converter->fromUnit()!="Inch" 
    && converter->fromUnit()!="Meter"
    && converter->fromUnit()!="Yard"
    && converter->fromUnit()!="Mile") {
    throw std::logic_error("not a length converter");
  }
  base_ = converter;
}


double YardToMeterConverter::convert(double inYard) const {
  if(base_)
    inYard = base_->convert(inYard);
  return inYard*0.9144;
}

std::string YardToMeterConverter::toString() const {
  return fromUnit() + " to Meter Converter";
}

void YardToMeterConverter::print() const {
  std::cout << toString();
}

std::string YardToMeterConverter::fromUnit() const {
  if(base_)
    return base_->fromUnit();
  return "Yard";
}

std::string YardToMeterConverter::toUnit() const {
  return "Meter";
}

UnitConverter* YardToMeterConverter::clone() {
  return new YardToMeterConverter;
}
