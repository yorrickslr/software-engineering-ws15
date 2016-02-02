#include <memory>

#include "dollartoeuroconverter.hpp"
#include "eurotodollarconverter.hpp"
#include "dollartoyenconverter.hpp"

#include "miletometerconverter.hpp"
#include "yardtometerconverter.hpp"
#include "inchtocentimeterconverter.hpp"
 
#include "celsiustofahrenheitconverter.hpp"
#include "fahrenheittocelsiusconverter.hpp"
#include "celsiustokelvinconverter.hpp"

#include "converterfactory.hpp"

int main(int argc, char* argv[])
{
  std::string conversion, value;
  try {
    std::string tmp = argv[1];
    conversion = tmp;
    tmp = argv[2];
    value = tmp;
  } catch(...) {
    std::cout << "ERROR while reading arguments" << std::endl;
    return 0;
  }

  try {
    UnitConverter* converter = ConverterFactory::instance()->create(conversion);
    std::cout << "created converter" << std::endl;
    std::cout << converter->toString() << " has converted " 
     << value << " " << converter->fromUnit() << " to " 
     << converter->convert(std::stod(value)) << " " << converter->toUnit() << std::endl;
  } catch(std::exception& e) {
    std::cerr << "ERROR: " << e.what() << std::endl;
  }
  return 0;
}
