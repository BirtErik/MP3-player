#include "player.hpp"
#include <iostream>
#include "exception.hpp"
int main() {
  Playlist playlist1("Mix");
  Artist artist1("Baltra");
  Artist artist2("Amelie Lens");
  Artist artist3("Kobosil");
  Artist artist4("Sasa Matic");
  Artist artist5("Joe Rogan");

  //kako bi exception radio unutar konstruktora?
  Media *p1 = new Pjesma("", "deep house", 6.37, &artist1);
  Media *p2 = new Pjesma("Hypnotized", "dark techno", 6.46, &artist2);
  Media *p3 = new Pjesma("Never let go", "deep house", 8.64, &artist3);
  Media *p4 = new Pjesma("Reskiraj", "Turbo folk", 3.10, &artist4);
  Media *c1 = new Podcast("#1992-EBirt","Podcast",145, &artist5); 

  try{
    p2->setTrajanje(-66);
  }
  catch(InvalidTrajanje &x){
      std::cout<<x.what()<<std::endl;
  }
  
  try{
    playlist1.add(nullptr);
  }
  catch(InvalidAdd &x){
    std::cout<<x.what()<<std::endl;
  }
  
  p1->setNaziv("Tears");
  p2->info();

  playlist1.add(p1);
  playlist1.add(p2);
  playlist1.add(p3);
  playlist1.add(p4);
  playlist1.add(c1);
  std::cout << std::endl;

  playlist1.ispisPlaylist();
  std::cout << std::endl;
  std::cout << "Rezultat bool operatora: " << (*p1 == *p2) << std::endl;
  std::cout << std::endl;
  Player play(&playlist1);

  play.next();
  play.next();
  play.next();
  play.previous();

  std::cout << std::endl << std::endl;

  std::cout << "After remove: " << std::endl;
  playlist1.remove(p2);
  playlist1.ispisPlaylist();
}