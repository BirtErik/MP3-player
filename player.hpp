#pragma once
#include <iostream>
#include "playlist.hpp"
#include "pjesma.hpp"
#include "podcast.hpp"
class Player{
public:
Player(Playlist *playlist = nullptr, Pjesma *pjesma = nullptr);
//~Player();
void next();
void previous();
void info() const;


private:
Playlist *playlist;
Pjesma *pjesma;
int currentSong = 0;
static int playedCount;
};