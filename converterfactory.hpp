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
      instance_ = new ConverterFactory{};
    }
    return instance_;
  }

  static UnitConverter* create(std::string const& converter_name) {
    return prototypes_[converter_name]->clone();
  }
  


private:
  ConverterFactory();
  ~ConverterFactory();
  static ConverterFactory* instance_;
  static std::map<std::string,UnitConverter*> prototypes_{
      {"Celsius to Fahrenheit Converter", new CelsiusToFahrenheitConverter},
      {"Fahrenheit to Celsius Converter", new FahrenheitToCelsiusConverter},
      {"Celsius to Kelvin Converter", new CelsiusToKelvinConverter},
      {"Dollar to Euro Converter", new DollarToEuroConverter},
      {"Euro to Dollar Converter", new EuroToDollarConverter},
      {"Dollar to Yen Converter", new DollarToYenConverter},
      {"Inch to Centimeter Converter", new InchToCentimeterConverter},
      {"Yard to Meter Converter", new YardToMeterConverter},
      {"Miles to Meter Converter", new MilesToMeterConverter}
    };
};

ConverterFactory* ConverterFactory::instance_ = NULL;


#endif
