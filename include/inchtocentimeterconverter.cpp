#include "inchtocentimeterconverter.hpp"

InchToCentimeterConverter::InchToCentimeterConverter()
{
  base_ = nullptr;
}

InchToCentimeterConverter::InchToCentimeterConverter(LengthConverter* converter) {
  base_ = converter;
}

InchToCentimeterConverter::InchToCentimeterConverter(Inversion* converter) {
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

double InchToCentimeterConverter::convert(double inInch) const {
  if(base_)
    inInch = base_->convert(inInch);
  return inInch*2.54;
}


std::string InchToCentimeterConverter::toString() const {
  return fromUnit() + " to Centimeter Converter";
}


void InchToCentimeterConverter::print() const {
  std::cout << toString();
}

std::string InchToCentimeterConverter::fromUnit() const {
  if(base_)
    return base_->fromUnit();
  return "Inch";
}

std::string InchToCentimeterConverter::toUnit() const {
  return "Centimeter";
}

UnitConverter* InchToCentimeterConverter::clone() {
  return new InchToCentimeterConverter;
}
