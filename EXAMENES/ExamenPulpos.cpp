#include <iostream>
#include <locale.h>
using namespace std;

void octal(int x){
  if(x > 7){
    octal(x / 8);
  }
  cout<<x % 8;
}


int main(){

  string nombre[]={Maria, Pablo, Pol, Paco, Manolo};
  string repetir;
  string comida = "crustaceo";
  bool esCorrecto = false;

  int num;


  //Imprime tu nombre por pantalla
  cout << "Francisco Soto Vera \n";

  //El pulpo tiene hambre: Te va a insultar hasta que le lances crustáceos.
  while (!esCorrecto){
    cout<< "Con que vas a alimentar a los pulpos?:";
    cin>> repetir;
    if (repetir == comida){
      esCorrecto = true;

    }else{
      cout << "Yo no quiero esa mierda perrooo!\n";
    }
  }

  //Crea una función a la que le pases un número y lo transforme a octal.
  cout << "Introduce un numero para pasarlo a octal:";
  cin >> num;
  octal(num);

  //Pasa lista a los pulpos.
  cout <<  "Imprimimos" << endl;
  imprimirArray(sumaNum,tama/4);

  return 0;
}
