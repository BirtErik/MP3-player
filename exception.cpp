#include "exception.hpp"

Exception::Exception(std::string message) : message(message) {}

 const char *Exception::what() { 
  return message.c_str(); 
}

InvalidTrajanje::InvalidTrajanje(std::string message) : Exception(message) {}

InvalidAdd::InvalidAdd(std::string message) : Exception(message) {}