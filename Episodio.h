#ifndef EPISODIO_H
#define EPISODIO_H
#include <iostream>
using namespace std;
class Episodio{
  protected: int id;
  int temporada;
  string titulo;
  int duracion;

  public:
  Episodio(int, int, string, int);
  ~Episodio();
  void proyecta();
  int getTemporada();
  int getId();
  int getDuracion();
  string getTitulo();
};

#endif