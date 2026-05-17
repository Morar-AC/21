#ifndef EXCEPTIONDECK_H
#define EXCEPTIONDECK_H

#include <exception>
#include <string>

class exceptiondeck : public std::exception {
private:
    std::string mesaj;

public:
   
    exceptiondeck(const std::string& msg);
    
  
    virtual ~exceptiondeck() noexcept override;


    virtual const char* what() const noexcept override;
};

#endif