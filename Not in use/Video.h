#ifndef VIDEO_H
#define VIDEO_H
#include <iostream>
using namespace std;

class Video
{
  public: 
  string ID;
  string nombre;
  string genero;
  int duracion;
  int calificacion;

  public:
  Video(string, string, int, int);
  string getId();
  string getNombre();
  string getGenero();
  int getCalif();
  void setCalif(int);
  virtual int getMuestra() = 0;
  virtual void proyecta() = 0;
  virtual void getDetalles() = 0;
  void operator + (int c){this->calif =c;}
  };

Video::Video(string i,string n, string g, int d, int c)
{
  ID = i;
  nombre = n;
  genero = g;
  duracion = d;
  calificacion = c;
}

string Video::getId()
{
  return ID;
}

string Video::getNombre()
{
  return nombre;
}

string Video::getGenero()
{
  return genero;
}

void Video::setCalif(int c)
{
  calififacion = c;
}

int Video::getCalif()
{
  return calif;
}

#endif