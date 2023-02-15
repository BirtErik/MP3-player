#pragma once;
#include "media.hpp"
#include "artist.hpp"
class Podcast : public Media{
public:

Podcast(std::string naziv,std::string genre, float trajanje, Artist *artist);
virtual void info() const override; 

virtual ~Podcast();

private:
Artist *artist;
};