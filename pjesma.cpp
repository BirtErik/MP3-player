#include "pjesma.hpp"
Pjesma::Pjesma(std::string naziv, std::string genre, float trajanje, Artist *artist) : Media(naziv, genre, trajanje), artist(artist){}

Pjesma::~Pjesma(){
  delete artist;
};

void Pjesma::info() const {
  std::cout<<"Naziv: "<<Media::getNaziv()<<std::endl;
  std::cout<<"Artist: "<<artist->getIme()<<std::endl;
  std::cout<<"Gener: "<<Media::getGener()<<std::endl;
  std::cout<<"Trajanje: "<<Media::getTrajanje()<<std::endl;
}
