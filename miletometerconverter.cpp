#include <miletometerconverter.hpp>

double MilesToMetersConverter::convert(double inMiles){
  return inMiles*1609.344;
}


std::string MilesToMetersConverter::toString() const {
  return "Miles to Meter Converter";
}


void MilesToMetersConverter::print() const {
  std::cout << toString();
}
