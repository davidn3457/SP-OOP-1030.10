#ifndef PELI_H
#define PELI_H
#include "proyectable.h"

class Peli:public Proyectable{
  public:
  Peli(string, string, int, string, int);
  ~Peli();
  int getMuestra();
  void proyecta();
  void getDetalles();
};

#endif