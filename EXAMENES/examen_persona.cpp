#include <iostream>
using namespace std;
class Persona {
  private:
    string nombre;
    string dni;
    double edad;
  public:
    //Constructor
    Persona(string nombre="Francisco", string dni="34274385H", double edad=18){
      this->nombre = nombre;
      this->dni = dni;
      this->edad = edad;
    }

    //SET
    void setNombre(string nombre){
      this->nombre = nombre;
    }

    void setDni(string dni){
      this->dni = dni;
    }

    void setEdad(double edad){
      (edad > 0) ? this-> dni = dni : this->dni = 1;
    }

    //GET
    string getNombre(){
      return this->nombre;
    }

    string getDni(){
      return this->dni;
    }

    double getEdad(){
      return this->edad;
    }

    //Metodo
    double imprimir(){
      this->nombre, this->edad, this->dni;
    }

    //Imprimir
    void Imprimir(){
      cout << "Me llamo " << this->nombre << " tengo " << this->edad << " anios y mi DNI es " << this->dni << endl;
    }

    void mayorEdad(){
      if (this->edad >18){
        cout << "Eres mayor de edad.";
      } else {
        cout << "Eres menor de edad.";
      }
      cout << endl;
    }


};
int main (){
double Imprimir;

Persona metodos;
metodos.Imprimir();
metodos.mayorEdad();


  return 0;
}
