//Lo que hace este programa es dividir a la variable x entre 3 y si el residuo de la division es distinto de 0, se imprime el valor
de x,siempre y cuando x sea menor o igual a 5.Posteriormente, al valor de x se le suma 2 y lo divide nuevamente entre 3, y si el residuo es distinto de 0, el valor de x se imprime y nuevamente se le suma 2. Si el residuo de nuestra division  es igual a cero, el valor de x no se imprime. El programa se detiene en el momento en que la variable x tome un valor mayor a 5. En este caso, x se inicia con un valor dado 1 y por lop tanto solo debe imprimir 1 y 5, ya que cuando x=3, el residuo es igual a cero y no se debe imprimir x.
//Autor: Maria Fernanda Hernandez Rodriguez
//Creado: Miercoles 8 de noviembre de 2017


#include<iostream>
using namespace std;

int main() {
         int x;
         x=1;

      while(x<=5){
          if(x%3==0){
          x=x+2;    }
          else {

        cout<<x<<endl;
        x=x+2;}
                 }

return 0;

           }
