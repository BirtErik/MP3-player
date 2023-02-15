#include "artist.hpp"

Artist::Artist(std::string ime) : ime(ime){}

void Artist::setIme(std::string const &ime){
  this ->ime = ime;
}
std::string Artist::getIme() const{
  return ime;
}
Artist::~Artist(){}