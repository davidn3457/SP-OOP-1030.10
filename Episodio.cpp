#include "Episodio.h"

Episodio::Episodio(int i, int t, string titu, int d){
  id = i;
  temporada = t;
  titulo = titu;
  duracion = d;
}

void Episodio::proyecta(){
  cout<<"Se esta proyectando el episodio "<<id<<" de la temporada "<<temporada<<" titulado "<<titulo;
}

int Episodio::getTemporada(){
return temporada;
}

int Episodio::getId(){
  return id;
}

int Episodio::getDuracion(){
  return duracion;
}

string Episodio::getTitulo(){
  return titulo;
}
Episodio::~Episodio(){ }