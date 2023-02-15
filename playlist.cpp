#include "playlist.hpp"

template <typename T> void print(T const &zapisi) {
  for (auto const &it : zapisi) {
    std::cout << it->getNaziv() << ", ";
  }
  std::cout << "\b\b " << std::endl;
}

Playlist::Playlist() {}
Playlist::Playlist(std::string ime) { setIme(ime); }

Playlist::Playlist(const Playlist &playlist) {
  ime = playlist.ime;
  zapisi = playlist.zapisi;
}
Playlist::~Playlist() {
  zapisi.clear();
}

//exception
void Playlist::setIme(std::string &ime) {
  if (ime != " ") {
    this->ime = ime;
  }
}
std::string Playlist::getIme() { return ime; }
std::vector<Media *> Playlist::getZapisi() { return zapisi; }

void Playlist::ispisPlaylist() {
  std::cout << "Playlist title: " << Playlist::getIme() << std::endl;
  std::cout << count << " songs" << std::endl;
  print(zapisi);
  /*
    for (auto const &it : zapisi) {
      std::cout << it->getNaziv() << ", ";
    }
    std::cout << "\b\b " << std::endl;*/
}

void Playlist::ispisCurrentSong(int n) {
  std::cout << zapisi[n]->getNaziv() << " | " << zapisi[n]->getTrajanje();
}

void Playlist::add(Media *m) {
  /*
  int i;
  if(std::find(zapisi.begin(), zapisi.end(), m) != zapisi.end()){
    std::cout<<"ALREADY ADDED"<<std::endl;
    std::cout<<"Add anyway? 1 or 0: ";
    std::cin>>i;
  }else {
    zapisi.push_back(m);
  }
  if(i){
    zapisi.push_back(m);
  }*/
  if (m == nullptr){
    throw InvalidAdd("Pjesma ne može biti null pointer");
  }
  zapisi.push_back(m);
  count++;
}

void Playlist::remove(Media *m) {
  std::vector<Media *>::iterator it =
      std::find(zapisi.begin(), zapisi.end(), m);
  
  zapisi.erase(it);
  count--; 
}
