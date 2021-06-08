#include <iostream>
#include <fstream>
#include "Video.h"
#include "Pelicula.h"
#include "Serie.h"
#include <stdio.h>
#include <string.h>
using namespace std;

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