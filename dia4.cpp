// Referencias y punteros

#include <iostream>
using namespace std;

int main(){
  string juego = "csgo";
  string & ocio = juego;
  string juegos[5];

  cout << juego <<endl; //Imprimer csgo
  cout << ocio <<endl;  //Imprime csgo
  cout << &ocio <<endl; //Imprime la direccion de memoria
  cout << &juego <<endl;  //Imprime la direccion de memoria

  ocio = "Pokemon";

  cout << ocio << endl;
  cout << juego <<endl;

  cout << &juegos << endl;
  cout << &juegos[0] << endl;
  cout << &juegos[1] << endl;
  cout << &juegos+2 << endl;
  cout << &juegos[3] << endl;
  cout << &juegos[4] << endl;

  return 0 ;
}
