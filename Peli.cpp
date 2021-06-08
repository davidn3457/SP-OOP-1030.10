#include "Peli.h"

void Peli::getDetalles(){ }
  Peli::~Peli(){ }
  Peli::Peli (string i, string n, int d, string g, int c):Proyectable(n,g,d,c){
    id = "p"+i;
  }

int Peli::getMuestra(){
  cout <<"\nLa pelicula "<<nombre<<" dura "<<duracion<<" minutos, es "<<genero<<", calificación de "<<calif;
  return duracion;
}

void Peli::proyecta(){
  cout<<"se esta poryectando la pelicula "<<nombre;
}