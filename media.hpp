//apstraktna klasa
#pragma once
#include <iostream>
#include "exception.hpp"

class Media{
public:
  Media();
  Media(std::string naziv=" ",std::string genre=" ", float trajanje=1);
  Media(std::string naziv=" ", float trajanje=0);
  virtual void info() const = 0; 
  virtual ~Media();

  virtual void setNaziv(std::string const &naziv);
  virtual void setGener(std::string const &genre);
  virtual void setTrajanje(float const &trajanje);
  virtual std::string getNaziv() const;
  virtual std::string getGener() const;
  virtual float getTrajanje() const;

  bool operator==(const Media &usporedba) const;
private:
  //static int brojStvorenih;
  std::string naziv;
  std::string genre;
  float trajanje;
};