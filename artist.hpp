#pragma once;
#include <iostream>

class Artist{
public:
  Artist(std::string ime=" ");
  void setIme(std::string const &ime);
  std::string getIme() const;
  ~Artist();
private:
  std::string ime;
};