#include "eurotodollarconverter.hpp"

EuroToDollarConverter::EuroToDollarConverter()
{
}

EuroToDollarConverter::EuroToDollarConverter(CurrencyConverter* converter) {
  base_ = converter;
}

EuroToDollarConverter::EuroToDollarConverter(Inversion* converter) {
  // quite ugly way to prevent other types of inversions
  if(converter->fromUnit()!="Dollar" 
    && converter->fromUnit()!="Euro" 
    && converter->fromUnit()!="Yen") {
    throw std::logic_error("not a currency converter");
  }
  base_ = converter;
}

double EuroToDollarConverter::convert(double inValue) const {
  if(base_)
    inValue = base_->convert(inValue);
  return inValue * 1.102796;
}

std::string EuroToDollarConverter::toString() const {
  return fromUnit() + " to Dollar Converter";
}

void EuroToDollarConverter::print() const {
  std::cout << toString();
}

std::string EuroToDollarConverter::fromUnit() const {
  if(base_)
    return base_->fromUnit();
  return "Euro";
}

std::string EuroToDollarConverter::toUnit() const {
  return "Dollar";
}

UnitConverter* EuroToDollarConverter::clone() {
  return new EuroToDollarConverter;
}
