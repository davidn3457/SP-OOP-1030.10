#include "Serie.h"
#include <stdio.h>

Serie:Serie(FILE * fp, string i, string n, int d, string g, int e, int c):Proyectable(n,g,d,c){
  id = "S" + i;
  char se[5], ti[25];
  int du, ep, x;
  for (int k = 0; k<e; k++){
    x = fscanf(fp,"%s %d %d %s %d", se, &t, &ep, ti, &du);
    epi[k] = new Episodio(ep,t, ti, du);
  }
  tot_epi = e;
}
int Serie::getMuestra(){
  cour"\nLa serie "<<nombre<<" tiene "<<duracion<<" temporadas, es "<<genero<<", califiacion de "<<" clave "<<id;
  return duracion;
}
void Serie:getDetalles(){
  int t= -1;
  for (int k =0, k< tot_epi; k++){
    if (epi[k]->getTemporada() != t)
    {cout<<"\n temporada "<<epi[k]->getTemporada();
    t=epi[k]->getTemporada();}
    cout<<"\n Episodio "<<epi[k]->getTitulo()<<" dura "<<epi[k]->getDuracion()<<" minutos";
  }
}
void Serie::proyecta(){
  cout<<"se esta proyetando la serie "<<nombre;
}

Serie::~Serie()
{}