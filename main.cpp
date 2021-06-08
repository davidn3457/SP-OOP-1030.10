#include <iostream>
#include <fstream>
#include "Proyectable.h"
#include "Peli.h"
//#include "Video.h"
//#include "Pelicula.h"
#include "Serie.h"
#include <stdio.h>
#include <string.h>
using namespace std;

FILE *archi;
Proyectable *videos[50];
int nVideos = 0;
void videosXgenero(){
  int k;
  string g;
  cout<<"Teclee el genero ";
  cin>>g;
  for(k=0; k<nVideos; k++){
    if (videos[k]->getGenero() == g)
    videos[k]->getMuestra();
  }
}

string formaCve(){
  if (nVideos < 10)
    return "00"+ to_string(nVideos);
  else
  if (nVideos < 100)
  return "0" + to_string(nVideos);
  else
    return to_string(nVideos);
}

void leer_datos(){
  int dura, nLee = 0, nEpi, cali;
  char nom[20], gene[15];
  string cve;
  archi = fopen("Pelis.txt","r");
  if (archi ==NULL){
    cout<<"El archivo Pelis no existe";
  }
  else{
    while (nLee!= -1){
      nLee = fscanf(archi,"%s %d %s %d", nom, &dura, gene, &cali);
      if (nLee != -1){
        cve = formaCve();
        strupr(nom);
        videos[nVideos]= new Peli(cve, nom, dura, gene, cali);
        nVideos++;
      }
    }
  }
}

bool encuentra(string se){
  int k;
  for (k=0; k<nVideos; k++)
  if (videos[k]->getId() == se)
    return true;
  return false;
} 

void tod_serie(){
  int k, x;
  char se[4];
  cout<<"\n Las series disponibles son ";
  for(k=0; k<nVideos;k++){
    if (videos[k]->getId().at(0) =='S')
    x = videos[k]->getMuestra();
  }
  cout<<"\n Teclee la clave de la serie para ver sus episodios o R para regresar al menu principal ";
  cin>>se;
  strupr(se);
}


/*
int main() 
{
  Video* Video[11];
  string ID;
  string IDepisodio;
  string nombre;
  string genero;
  int duracion;
  int temporada;00
  double calificacion;
  int opcionseleccionada;
  int i;
  char Tipo;

  ifstream ifVideo;
  ifVideo.open("video.txt");

  while(ifVideo.eof())
  {
    ifVideo >> Tipo; 
    if(Tipo == 'P')
    {
      ifVideo >> ID >> nombre >> duracion >> genero >> calificacion;
      Video[i] = new Pelicula(ID, nombre, duracion, genero, calificacion);
    }
    if(Tipo == 'S')
    {
      ifVideo >> ID >> nombre >> genero >> temporada;
      Video[i] = new Serie(ID, nombre, genero, temporada);
    }
    i++
  }
  ifVideo.close();

  ifstream ifEpisodios;
  ifEpisodios.open("episodios.txt");
  
  while(ifEpisodios.eof())
  {
    ifEpisodios >> ID >> nombre >> genero >> temporada;
    Serie[i] = new Serie(ID, nombre, genero, temporada);
    i++;
  }

  cout << "Bienvenid@ al menu, Teclee la Opcion que Guste Accesar ";
  cout << "1. Cargar archivo de datos" << endl << "2. Mostrar los videos en general con una cierta calificación o de un cierto género" << endl << "3. Mostrar los episodios de una determinada serie con una calificacion determinada" << endl << "4. Mostrar las películas con cierta calificacion" << endl << "5. Calificar un video" << endl << "0. Salir";
  cin >> opcionseleccionada;


}
*/