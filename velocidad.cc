//Programa para calcular la velocidad de una particula
//Autor: Maria Fernanda Hernmandez Rodriguez
//Creado: Miercoles 8 de noviembre de 2017

#include <iostream>
using namespace std;

int main (){
  float d;
  float t;

  cout<<"¿Cual es la distancia d recorrida por la particula?"<<endl;
  cin>> d;
  cout<<"¿Cual es el tiempo t transcurrido?"<<endl;
  cin>> t;
  cout<<"La velocidad de la particula es: "<< d/t<<endl;
  return 0;
}
