#pragma once;
#include <iostream>
#include <vector>
#include <algorithm>
#include "media.hpp"
#include "pjesma.hpp"
#include "podcast.hpp"

class Playlist{
public:
Playlist();
Playlist(std::string ime);
Playlist(const Playlist &playlist);
~Playlist();

void add(Media *m);
void remove(Media *m);
void setIme(std::string &ime);
std::string getIme();
std::vector<Media*> getZapisi();
void ispisPlaylist();
void ispisCurrentSong(int n);

private:
std::string ime;
int count = 0;
std::vector<Media*> zapisi;
};