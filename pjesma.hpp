#pragma once;
#include "media.hpp"
#include "artist.hpp"
class Pjesma : public Media{
public:

Pjesma(std::string naziv, std::string genre, float trajanje, Artist *artist);
virtual void info() const override; 

virtual ~Pjesma();

private:
Artist *artist;
};