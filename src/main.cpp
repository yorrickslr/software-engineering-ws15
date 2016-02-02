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
#include "awesomeexception.cpp"

//split method as on http://stackoverflow.com/questions/236129/split-a-string-in-c
std::vector<std::string> &split(const std::string &s, char delim, std::vector<std::string> &elems) {
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        elems.push_back(item);
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

  std::cout << '\n' << "Due to bad voodoo the Ctrl+D command is not working. To exit the loop type in \"exit\" " << '\n' << std::endl;
  std::cout << "Usage: <converter> <int>" << '\n' << std::endl;

  for (std::string line; std::getline(std::cin, line);) {
    if(line=="") {
      continue;
    }
    std::vector<std::string> elements;
    split(line, ' ', elements);
    if(elements.size()!=2) {
      if("exit" == elements.front()) {
        std::cout << "Elvis has left the building!" << std::endl;
        break;
      } else {
        std::cout << "You need to give two arguments: the converter name and the value" << std::endl;
      }
    } else {
      try {
        UnitConverter* converter = ConverterFactory::instance()->create(elements[0]);
        Command cmd(converter, &UnitConverter::convert, stod(elements[1]));
        commands.push_back(cmd);
      } catch(...) {
        std::cerr << "ERROR: cannot create converter instance (maybe unknown converter?)" << std::endl;
      }
    }
  }


  /*for (size_t i = 0; i < commands.size(); i++) { 
    std::cout << "commands.size() = " << commands.size() << std::endl; 
    double conv_val = 0; 
    conv_val = commands[i].execute(); 
    std::cout << "DEBUG 2" << std::endl; 
    commands[i].print_conv(); 
    std::cout << '\n' << "converted "; 
    commands[i].print_val(); 
    std::cout << " to " << conv_val << '\n' << std::endl; 
  }*/

  /*while(!commands.empty()) {
      //std::cout << "***DEBUG*** me dumping the core?" << std::endl;
    double conv_val = commands.front().execute();
    //std::cout << "***DEBUG*** itsa not me!" << std::endl;
    commands.front().print_conv();
    std::cout << std::endl << "converted "; 
    commands.front().print_val();
    std::cout << " to " << conv_val << '\n' << std::endl;
    commands.pop_front();
  }*/

  for(Command cmd : commands) {
    try {
      //std::cout << "***DEBUG*** me dumping the core?" << std::endl;
      double conv_val = cmd.execute();
      //std::cout << "***DEBUG*** itsa not me!" << std::endl;
      cmd.print_conv();
      std::cout << std::endl << "converted "; 
      cmd.print_val();
      std::cout << " to " << conv_val << '\n' << std::endl;
    } catch(std::exception& e) {
      std::cerr << "ERROR: " << e.what() << std::endl;
    }
  }


  /* old stuff
  auto myConverter = std::make_shared<DollarToEuroConverter>();
  double aLotOfDollars = 10000;
  double aLotOfEuros = myConverter->convert(aLotOfDollars);
  std::cout << myConverter->toString() << " has converted " << aLotOfDollars << " Dollar to " << aLotOfEuros <<" Euros!"<<std::endl;
  */

  return 0;
}
