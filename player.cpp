#include "player.hpp"

int Player::playedCount = 0;

Player::Player(Playlist *playlist, Pjesma *pjesma)
    : playlist(playlist), pjesma(pjesma) {}

/*
Player::~Player() {
  delete playlist;
  if(pjesma != nullptr){
    delete pjesma;
  }
}
*/

void Player::next() {
  if (playlist != nullptr){
    currentSong++;
    playedCount++;
    info();
  }
}
void Player::previous() {
  if (playlist != nullptr){
    currentSong--;
    playedCount++;
    info();
  }
}
void Player::info() const{
  std::cout<<std::endl<<"----------------"<<std::endl;
  std::cout<<"Played count: "<<playedCount<<std::endl;
  std::cout << "Now playing: ";
  playlist->ispisCurrentSong(currentSong);
}