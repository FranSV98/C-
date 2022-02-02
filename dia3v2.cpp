#include <iostream>
using namespace std;

void imprimirArray(int array[], int tama){
  for (int i = 0 ; i < tama ; i++){
    cout << array[i] << endl;
  }
}

void rellenarArray (int nume[], int tama){
  for (int i = 0 ; i < tama ; i++){
    nume[i] = i;
  }
}

void sumarDe4en4(int nume[], int tama, int sumaNum[]){
  for (int i = 0 ; i < tama ; i+=4){
    sumaNum[i/4] = i + i+1 + i+2 + i+3;
  }
}

int main(){
string repetir;
string contrasena = "contrasena";
bool esCorrecto = false;

int edadIntroducida;

int nota=0;

int esPar=0;

int numeroArray[]={2,3,45,654,3432,23,41,1,211,3,437};


// Deberes:- Rellenar un vector con los 100 primeros números.
//Sumar de 4 en 4 los números y guardarlos en otro vector.

int tama = 100;
int nume[tama];
int sumaNum[tama/4];
cout <<  "Rellenamos el array con los 100 primeros números." << endl;
rellenarArray (nume, tama);
cout <<  "Sumamos de 4 en 4." << endl;

sumarDe4en4(nume, tama, sumaNum);
cout << "Otra forma de hacerlo [F]" << endl;
int suma = 0;
int contador = 0;
for (int i = 0 ; i < tama ; i++){
  suma += i;
  contador ++;
  if (contador % 4 == 0){
    sumaNum[i/4] = suma;
    suma = 0;
  }
}

cout <<  "Imprimimos" << endl;
imprimirArray(sumaNum,tama/4);


//Escribir un programa que guarde una contraseña y no nos permita avanzar hasta no haber introducido la contraseña correcta.
while (!esCorrecto){
  cout<< "Introduce la pinche PASSWORD!:";
  cin>> repetir;
  if (repetir == contrasena){
    esCorrecto = true;
  }
}


//Escribir un programa que pregunte una edad y responda si la persona es mayor o menor de edad.
cout << "Introduce tu edad:" <<endl;
cin >> edadIntroducida;

if (edadIntroducida >= 18){
  cout << "Eres mayor de edad \n";
}else{
  cout << "Eres menor de edad \n";
}


//Escribir un programa que pregunte una nota y responda si ha sacado: sobresaliente, notable, bien, suficiente, suspenso.
cout << "Introduce la nota que has sacado" <<endl;
cin >> nota;

if((nota>0) && (nota<10)) {
        if((nota>=0)&&(nota<=4.99)) {
            cout<<"Su nota es "<<nota<<" Suspenso \n";
        }
        if((nota>=5)&&(nota<=6.99)) {
            cout<<"Su nota es "<<nota<<" Suficiente \n";
        }
        if((nota>=7)&&(nota<=8.99)) {
            cout<<"Su nota es "<<nota<<" Notable \n";
        }
        if(nota>=9&&nota<=9.99) {
            cout<<"Su nota es "<<nota<<" Sobresaliente \n";
        }
        if(nota==10) {
            cout<<"Su nota es "<<nota<<" Matricula de Honor \n";
        }
    } else {
        cout<<"Eso no esta bien";
    }


//Escribir un programa que pregunte un número y responda si es par o impar.
cout << "Introduce un numero para comprobar si es par o impar:" << endl;
cin >> esPar;

if(esPar % 2 == 0){
  cout << "Ese numero es par";
}
if(esPar % 2 == 1){
  cout << "El numero es impar";
}

//Escribir un programa al que le pases un array de números y devuelva un array con solo los pares.





return 0;
}
