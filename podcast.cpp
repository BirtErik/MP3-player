#include "podcast.hpp"

Podcast::Podcast(std::string naziv, std::string genre, float trajanje,
                 Artist *artist)
    : Media(naziv, trajanje), artist(artist) {}

Podcast::~Podcast() { delete artist; };

void Podcast::info() const {
  std::cout << "Naziv: " << Media::getNaziv() << std::endl;
  std::cout << "Artist: " << artist->getIme() << std::endl;
  std::cout << "Trajanje: " << Media::getTrajanje() << std::endl;
}
