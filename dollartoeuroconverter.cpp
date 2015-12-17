#include "dollartoeuroconverter.hpp"

#include <string>

DollarToEuroConverter::DollarToEuroConverter()
{
}

DollarToEuroConverter::DollarToEuroConverter(CurrencyConverter* converter) {
  base_ = converter;
}

DollarToEuroConverter::DollarToEuroConverter(Inversion* converter) {
  base_ = converter;
}

/*In: double value of dollars
 *Out: Euro value of input dollars as of 2.11.15
 */

double DollarToEuroConverter::convert(double inputDollars) const {
  if(base_)
    inputDollars = base_->convert(inputDollars);
  return inputDollars*0.906786;
}

std::string DollarToEuroConverter::toString() const {
  return fromUnit() + " to Euro Converter";
}

void DollarToEuroConverter::print() const {
  std::cout << toString();
}

std::string DollarToEuroConverter::fromUnit() const {
  if(base_)
    return base_->fromUnit();
  return "Dollar";
}

std::string DollarToEuroConverter::toUnit() const {
  return "Euro";
}

UnitConverter* DollarToEuroConverter::clone() {
  return new DollarToEuroConverter;
}