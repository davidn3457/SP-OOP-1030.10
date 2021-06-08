#ifndef PELICULA_H
#define PELICULA_H
#include <iostream>
using namespace std;

class Pelicula: public Video
{
  public:
  Pelicula(string, string, int, string, int);
  int getMuestra();
  void proyecta();
  void getDetalles();
};

Pelicula::Pelicula(string i, string n, int d, string g, int c):Video(i,n,d,g,c)
{
  
}

int Pelicula::getMuestra()
{
  cout << ID << "   " << nombre << "   " << duracion << "   " << genero << "   " << calificacion << endl;
}
void Pelicula::proyecta()
{
  cout<<"Se esta proyectando la pelicula "<< nombre;
}