#include <iostream>
using namespace std;

class Persona{
  private:
    string nombre;
    string dni;
    int edad;
  public:
    Persona(string nombre, string dni, int edad = 18){
      this->nombre = nombre;
      this->dni = dni;
      this->edad = edad;
  }
  string getNombre(){
    return this->nombre;
  }

  string getDni(){
    return this->dni;
  }

  int getEdad(){
    return this->edad;
  }

  void setNombre(string nombre){
    this->nombre = nombre;
  }

  void setDni(string dni){
    this->dni = dni;
  }

  void setEdad(int edad){
    this->edad = edad;
  }

  void imprimir(){
    cout <<"Me llamo " << this->nombre << " tengo " << this->edad << " anios y mi dni es " << this->dni << endl;
  }

};

int main(){
  Persona miPersona("Francisco", "12345675J", 23);
  Persona otraPersona("Isaac", "54354343G");
  cout << "Comprobando que imprimir() funciona: " << endl;
  miPersona.imprimir();
  cout << "Comprobando que los get funcionan: " << endl;


  miPersona.getNombre << " " << miPersona.getDni << " " << miPersona.getEdad << endl;


  return 0;
}
