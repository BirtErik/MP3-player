#include "media.hpp"

// konstruktori
Media::Media() {}
Media::Media(std::string naziv, std::string genre, float trajanje) {
  setNaziv(naziv);
  setGener(genre);
  setTrajanje(trajanje);
}

Media::Media(std::string naziv, float trajanje)
    : naziv(naziv), trajanje(trajanje) {}

Media::~Media() {}

// setteri
// exception
void Media::setNaziv(std::string const &naziv) { this->naziv = naziv; }
void Media::setGener(std::string const &gener) { this->genre = gener; }
void Media::setTrajanje(float const &trajanje) {
  if (trajanje <= 0){
    throw InvalidTrajanje("Trajanje ne može biti manje od 0 ");
  }
  this->trajanje = trajanje; 
}

// getteri
std::string Media::getNaziv() const { return naziv; }
std::string Media::getGener() const { return genre; }
float Media::getTrajanje() const { return trajanje; }

bool Media::operator==(const Media &usporedba) const {
  if (this->naziv == usporedba.naziv && this->genre == usporedba.genre &&
      this->trajanje == usporedba.trajanje) {
    return true;
  }
  return false;
}
