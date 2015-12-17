#include <memory>
#include <deque>
#include <sstream>
#include <vector>

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
#include "command.hpp"

//split method as on http://stackoverflow.com/questions/236129/split-a-string-in-c
std::vector<std::string> &split(const std::string &s, char delim, std::vector<std::string> &elems) {
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        elems.push_back(item);
        std::cout << item << std::endl;
    }
    return elems;
}

int main(int argc, char* argv[])
{
  /*std::string conversion, value;
  try {
    std::string tmp = argv[1];
    conversion = tmp;
    tmp = argv[2];
    value = tmp;
  } catch(...) {
    std::cout << "ERROR while reading arguments" << std::endl;
    return 0;
  }
  */


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
  /*std::cout << converter->toString() << " has converted " 
    << value << " " << converter->fromUnit() << " to " 
    << converter->convert(std::stod(value)) << " " << converter->toUnit() << std::endl;*/

  
  
  /*UnitConverter* converter = ConverterFactory::instance()->create(conversion);
  Command cmd(converter, &UnitConverter::convert, std::stod(value));
  double conv_val = cmd.execute();
  cmd.print_conv();
  std::cout << '\n' << "converted ";
  cmd.print_val();
  std::cout << " to " << conv_val << '\n' << std::endl;*/


  std::deque<Command> commands;

  for (std::string line; std::getline(std::cin, line);) {
    std::vector<std::string> elements;
    split(line, ' ', elements);
    UnitConverter* converter = ConverterFactory::instance()->create(elements[0]);
    std::cout << "created converter" << std::endl;
    Command cmd(converter, &UnitConverter::convert, stod(elements[1]));
    commands.push_back(cmd);
  }

  for (size_t i = 0; i < commands.size(); i++)
  {
    double conv_val = commands.front().execute();
    commands.front().print_conv();
    std::cout << '\n' << "converted ";
    commands.front().print_val();
    std::cout << " to " << conv_val << '\n' << std::endl;

    commands.pop_front();
  }


  /* old stuff
  auto myConverter = std::make_shared<DollarToEuroConverter>();
  double aLotOfDollars = 10000;
  double aLotOfEuros = myConverter->convert(aLotOfDollars);
  std::cout << myConverter->toString() << " has converted " << aLotOfDollars << " Dollar to " << aLotOfEuros <<" Euros!"<<std::endl;
  */

  return 0;
}
