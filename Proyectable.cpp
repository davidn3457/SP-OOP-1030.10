#include "Proyectable.h"

Proyectable::Proyectable(string n, string g, int d, int c){
  nombre = n;
  genero = g;
  duracion = d;
  calif = c;
}

string Proyectable::getId(){
  return id;
}

string Proyectable::getNombre(){
  return nombre;
}

string Proyectable::getGenero(){
  return genero;
}

void Proyectable::setCalif(int c){
  calif = c;
}

int Proyectable::getCalif(){
  return calif;
}