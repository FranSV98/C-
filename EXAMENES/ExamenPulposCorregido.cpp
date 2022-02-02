#include <iostream>
using namespace std;

void solicitarContrasena(string clave){
  string palabra;
  int i;
/* //CUANDO EL PULPO SOLO QUIERE COMER
  cout << "Quiero comer crustaceo...";
  cin >> palabra;
  while(clave != palabra){
    cout << "Me cago en tos tus muertos so desgraciao!";
    cin >> palabra;
  }
}
/* //CUANDO EL PULPO SE CABREA SI NO COME
  do{
    cout << "Quiero comer crustaceo...";
    cin >> palabra;
  } while(clave != palabra);
}*/

//CUANDO EL PULPO SE VA CABREANDO SI NO COME
  cout << "Quiero comer crustaceo...";
  cin >> palabra;
  for(i=0 ; clave != palabra && i < 3 ; i++){
    cout << "Dame algo porfavor que eso no me gusta!";
    cin >> palabra;
  }
  for(; clave != palabra && i < 10 ; i++){
    cout << "Es que eres tonto, lo que quiero son crustaceos!!";
    cin >> palabra;
  }
  if(clave != palabra) cout << "El pulpo se cabreo y se fue";
}

void imprimirLista (string lista[], int tama){
  for (int i = 0 ; i < tama ; i++){
    cout << i <<endl;
  }
}

void imprimirLista (char lista[], int tama){
  for (int i = 0 ; i < tama ; i++){
    cout << i <<endl;
  }
}

void pasarLista (string lista[], int tama, char listaFaltas[]){
  string respuesta;
  for (int i = 0 ; i < tama ; i++){
    cout << "Esta " <<lista[i] << " en clase?" << endl;
    cin >> respuesta;
    if (respuesta == "si") listaFaltas[i] = 'V';
    else listaFaltas[i] = 'F';
  }
}

int aBase8 (int numero){
  int unidades;
  int decenas;
  if (numero > 64){
    cout << "No estamos preparados para trabajar la recurrencia todavia...";
    numero = -1;
  }
  else{
    unidades = numero%8;
    decenas = numero/8;
    numero = decenas*10 + unidades;
  }
  return numero;
}

int main(){
string contrasena = "crustaceo";
int numero;
int tamaLista = 5;
int numeroBase8;
string listaPulpos[] = {"A","B","C","D","E"};
char listaFaltas[tamaLista];
//Nombre
  cout << "Francisco Soto Vera" << endl;

//Dar de comer al pulpo
  solicitarContrasena(contrasena);

//Pasar numero a base8
  cout << "Introduce un numero;";
  cin >> numero;
  numeroBase8 = aBase8(numero);
  cout << numeroBase8 << endl;

//Imprimir lista pulpos
imprimirLista(listaPulpos, 5);

//Pasar lista
imprimirLista(listaPulpos, tamaLista);
cout << endl;
pasarLista(listaPulpos, tamaLista, listaFaltas);
cout << endl;
imprimirLista(listaFaltas, tamaLista);

  return 0;
}
