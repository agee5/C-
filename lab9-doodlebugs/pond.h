#ifndef _POND_H_
#define _POND_H_

#include <string>
#include <cstdlib>
#include "organism.h"

using namespace std;

class Pond  :public Organism
{
 public:
  string toString() {return "Pond";}
  string getImageName();
  bool isEmpty() {return false;}
  void move() {};
 private:

};


#endif
