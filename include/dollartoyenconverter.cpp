#include "dollartoyenconverter.hpp"

DollarToYenConverter::DollarToYenConverter()
{
}

DollarToYenConverter::DollarToYenConverter(CurrencyConverter* converter) {
  base_ = converter;
}

DollarToYenConverter::DollarToYenConverter(Inversion* converter) {
  // quite ugly way to prevent other types of inversions
  if(converter->fromUnit()!="Dollar" 
    && converter->fromUnit()!="Euro" 
    && converter->fromUnit()!="Yen") {
    throw std::logic_error("not a currency converter");
  }
  base_ = converter;
}

double DollarToYenConverter::convert(double inputDollars) const {
  if(base_)
    inputDollars = base_->convert(inputDollars);
  return inputDollars*120.684499;
}

std::string DollarToYenConverter::toString() const {
  return fromUnit() + " to Yen Converter";
}

void DollarToYenConverter::print() const {
  std::cout << toString();
}

std::string DollarToYenConverter::fromUnit() const {
  if(base_)
    return base_->fromUnit();
  return "Dollar";
}

std::string DollarToYenConverter::toUnit() const {
  return "Yen";
}

UnitConverter* DollarToYenConverter::clone() {
  return new DollarToYenConverter;
}
