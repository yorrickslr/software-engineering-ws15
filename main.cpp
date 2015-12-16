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

// #include "converterfactory.hpp"

#include <iostream>

int main(int argc, char* argv[])
{;
  std::string conversion, value;
  try {
    std::string tmp = argv[1];
    conversion = tmp;
    tmp = argv[2];
    value = tmp;
  } catch(...) {
    std::cout << "ERROR while reading arguments" << std::endl;
    return 1;
  }
  // ConverterFactory* factory;
  // std::cout << "created converter" << std::endl;
  std::cout << "***DEBUG*** going to create object" << std::endl;
  UnitConverter* converter = new EuroToDollarConverter(new DollarToEuroConverter());
  // UnitConverter* converter = ConverterFactory::instance()->create(conversion);
  std::cout << "created converter" << std::endl;


  // From Assignment 2
  /*std::shared_ptr<UnitConverter> converter;
  // currencyconversion
  if(conversion=="DollarToEuro" || conversion=="DollarToEuroConverter") {
    converter = std::make_shared<DollarToEuroConverter>();
  } else if(conversion=="EuroToDollar" || conversion=="EuroToDollarConverter") {
    converter = std::make_shared<EuroToDollarConverter>();
  } else if(conversion=="DollarToYen" || conversion=="DollarToYenConverter") {
    converter = std::make_shared<DollarToYenConverter>();
  // lengthconversion
  } else if(conversion=="MileToMeter" || conversion=="MileToMeterConverter") {
    converter = std::make_shared<MilesToMeterConverter>();
  } else if(conversion=="YardToMeter" || conversion=="YardToMeterConverter") {
    converter = std::make_shared<YardToMeterConverter>();
  } else if(conversion=="InchToCentimeter" || conversion=="InchToCentimeterConverter") {
    converter = std::make_shared<InchToCentimeterConverter>();
  // temperatureconversion
  } else if(conversion=="CelsiusToFahrenheit" || conversion=="CelsiusToFahrenheitConverter") {
    converter = std::make_shared<CelsiusToFahrenheitConverter>();
  } else if(conversion=="FahrenheitToCelsius" || conversion=="FahrenheitToCelsiusConverter") {
    converter = std::make_shared<FahrenheitToCelsiusConverter>();
  } else if(conversion=="CelsiusToKelvin" || conversion=="CelsiusToKelvinConverter") {
    converter = std::make_shared<CelsiusToKelvinConverter>();
  // error handling
  } else {
    std::cout << "ERROR due to unknown converter '" << conversion << "', showing readme..." << std::endl << std::endl;
    system("more README.md");
    return 0;
  }*/
  std::cout << converter->toString() << " has converted " 
    << value << " " << converter->fromUnit() << " to " 
    << converter->convert(std::stod(value)) << " " << converter->toUnit() << std::endl;
  /* old stuff
  auto myConverter = std::make_shared<DollarToEuroConverter>();
  double aLotOfDollars = 10000;
  double aLotOfEuros = myConverter->convert(aLotOfDollars);
  std::cout << myConverter->toString() << " has converted " << aLotOfDollars << " Dollar to " << aLotOfEuros <<" Euros!"<<std::endl;
  */

  return 0;
}
