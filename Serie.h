#ifndef SERIE_H
#define SERIE_H
#include <iostream>
using namespace std;

class Serie: public Video
{
  private:
  int temporadas;

  public:
  Serie(string, string, string, int);
  int getMuestra();
  void proyecta();
  void getDetalles();
};

Serie::Serie(string i, string n, string g, int t): Video (i, n, g)
{
  temporadas = t;
}

int Serie::getMuestra()
{
  return duracion;
}

void Serie::proyecta()
{
  
}

void Serie::getDetalles()
{
  cout << ID << "   " << nombre << "   " << genero << "   " << temporadas << endl;
}

#endif