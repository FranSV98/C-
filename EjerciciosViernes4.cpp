#include <stdlib.h>
#include <time.h>
#include<iostream>
using namespace std;



int main(){
int vectorNIntro[10];
int vectorDe0[10]={0,0,0,0,0,0,0,0,0,1};
int restaPosicion = 0;
int pos;

//EJERCICIO 1--ESCRIBE TU NOMBRE
  cout << "Francisco Soto Vera \n";

//EJERCICIO 2.1--Rellena un vector de tamaño 10 con números mayores a 5 solicitando dichos números desde teclado.

  cout << "Ingresa 10 numeros:" << endl;

  for(int i = 0; i < 10; i++){
    cin >> vectorNIntro[i];
  }

  cout << "Los numeros que has ingresado son:" << endl;

  for(int i = 0; i < 10; i++){
    cout << vectorNIntro[i] << endl;
  }

//EJERCICIO 3-- ¡Di un número del 1 al 10!
  cout << "Di un numero del 1 al 10:" << endl;
  cin >> pos;

//EJERCICIO 3.1--En el primer vector decrementa en 5 unidades el número que esté en la posición que se haya introducido por pantalla.
//Si ese número es menor a 5, la posición debe quedarse a 0.
//Deja de solicitar números cuando alguna de las posiciones se quede a 0.


//EJERCICIO 3.2--En el segundo vector indica si ha acertado la posición que tiene el 1 o si por el contrario tiene que probar suerte otra vez.
//Deja de solicitar números cuando se hacierte en qué posición está el 1 o se haya solicitado el número al menos 5 veces sin exito.


//EJERCICIO 4--Numero Aleatorio

  srand(time(NULL));
  int i;
  cout << "5 numeros generados aleatoriamente:\n";
  for(i=1; i<=; i++)
    cout << rand() << endl;





  return 0;
}
