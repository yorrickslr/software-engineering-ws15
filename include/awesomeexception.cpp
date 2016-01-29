#ifndef AWESOMEEXCEPTION_HPP
#define AWESOMEEXCEPTION_HPP

#include <exception>

class Awesomeexception : public std::exception {
  public:
    Awesomeexception(char* peter) : errText_{peter} {}

    virtual const char* what() const throw() {
      return errText_;
    }

  private:
    char* errText_;
};


#endif
