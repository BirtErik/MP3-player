#pragma once
#include <iostream>
class Exception : public std::exception{
public:
  Exception(std::string message);
  const char* what();

private:
std::string message;
};

class InvalidTrajanje : public Exception{
public:
  InvalidTrajanje(std::string message);
};

class InvalidAdd : public Exception{
public:
  InvalidAdd(std::string message);
};