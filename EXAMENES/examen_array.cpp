#include<iostream>
using namespace std;

void imprimirArray(){
  for (int i = 0 ; i < 5 ; i++){
    cout << arrayNumAleatorios[i] << endl;
  }
}

int main(){
int arrayNumAleatorios[] = {2, 4, 6, 8, 10};
//NOMBRE
cout << "Francisco Soto Vera \n";

//Cambiar el tercer número por su doble.
imprimirArray();


return 0;
}
