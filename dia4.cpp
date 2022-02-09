// Referencias y punteros

#include <iostream>
using namespace std;

  int main(){
    string juego = "CSGO";
    //string &ocio = juego;
    //string juegos[5];
    string* ptrJuego = &juego;

    //cout << juego <<endl; //Imprimer csgo

    cout << "Imprimo el juego:" << juego << endl;
    cout << "Imprimo el &juego:" << &juego << endl;
    //cout << "Imprimo el ptrjuego:" << *juego << endl;
    cout << "Imprimo el ptrjuego:" << ptrJuego << endl;
    cout << "Imprimo *el ptrjuego:" << *ptrJuego << endl;


  return 0 ;
}
