#ifndef PELI_H
#define PELI_H
#include <iostream>
using namespace std;

class Peli: public Proyectable
{
  public:
  Peli(string, string, int, string, int);
  ~Peli();
  int getMuestra();
  void proyecta();
  void getDetalles();
};
/*
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
};
*/
#endif