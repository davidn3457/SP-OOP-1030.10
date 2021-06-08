#ifndef PROYECTABLE_H
#define PROYECTABLE_H
#include <iostream>
using namespace std;
class Proyectable{
  public: string id;
  string nombre;
  string genero;
  int duracion;
  int calif;
  public:
  Proyectable(string, string, int, int);
  string getId();
  string getNombre();
  string getGenero();
  void setCalif(int );
  int getCalif();
  virtual int getMuestra()=0;
  virtual void proyecta() = 0;
  virtual void getDetalles()=0;

  void operator + (int c){
    this->calif = c;
  }

};
#endif