#ifndef CONVERTERFACTORY_H
#define CONVERTERFACTORY_H
#include "dollartoeuroconverter.hpp"
#include "eurotodollarconverter.hpp"
#include "dollartoyenconverter.hpp"

#include "miletometerconverter.hpp"
#include "yardtometerconverter.hpp"
#include "inchtocentimeterconverter.hpp"
 
#include "celsiustofahrenheitconverter.hpp"
#include "fahrenheittocelsiusconverter.hpp"
#include "celsiustokelvinconverter.hpp"

#include <memory>
#include <map>


class ConverterFactory
{
public:
  static ConverterFactory* instance()  {
    if (instance_ == nullptr)
    {
      instance_ = new ConverterFactory;
    }
    return instance_;
  }

  static UnitConverter* create(std::string const& converter_name) {
    auto iter = prototypes_.find(converter_name);
    if (iter != prototypes_.end())
    {
      return iter->second->clone();
    }
    std::cout << "Well, we are very sorry, but this converter is not supported. Try again" << std::endl;
    exit(1);
    return nullptr;
  }

  static std::map<std::string,UnitConverter*> prototypes_;

private:
  ConverterFactory() {}
  ~ConverterFactory();
  static ConverterFactory* instance_;
  
};

ConverterFactory* ConverterFactory::instance_ = NULL;
std::map<std::string,UnitConverter*> ConverterFactory::prototypes_{
    {"CelsiusToFahrenheit", new CelsiusToFahrenheitConverter},
    {"FahrenheitToCelsius", new FahrenheitToCelsiusConverter},
    {"CelsiusToKelvin", new CelsiusToKelvinConverter},
    {"DollarToEuro", new DollarToEuroConverter},
    {"EuroToDollar", new EuroToDollarConverter},
    {"DollarToYen", new DollarToYenConverter},
    {"InchToCentimeter", new InchToCentimeterConverter},
    {"YardToMeter", new YardToMeterConverter},
    {"MilesToMeter", new MilesToMeterConverter}
  };

#endif
