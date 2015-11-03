#include <yardtometerconverter.hpp>

YardsToMetersConverter::YardsToMetersConverter() {
  
}


double YardsToMetersConverter::convert(double inYards){
  return inYards*0.9144;
}


std::string YardsToMetersConverter::toString() const {
  return "Yards to Meter Converter";
}


void YardsToMetersConverter::print() const {
  std::cout << toString();
}
