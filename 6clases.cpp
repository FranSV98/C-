#include<iostream>
using namespace std;

class Rectangulo {
private:
  double base;
  double altura;
public:
   //CONSTRUCTOR
  Rectangulo(double base = 1, double altura = 1){
    //this->base = base;
    //this->altura = altura;
    setBase(base);
    setAltura(altura);
  }
  void setBase(double base){
    (base > 0) ? this->base = base : this->base = 1;
  }
  void setAltura(double altura){
    (altura > 0) ? this->altura = altura : this->altura = 1;
  }
  //GET
  double getBase(){
    return this->base;
  }
  double getAltura(){
    return this->altura;
  }
  //METODOS
  double area(){
    return this->base*this->altura;
  }
  //IMPRIMIR
  void imprimir(){
      cout << "La base de folio es " << this->base << " y la altura es " << this->altura << endl;
  }
};

int main(){

  Rectangulo folio(2,3);
  Rectangulo tablero;
  Rectangulo manta(4);
  double areaFolio;

  cout << "Folio" << endl;
  folio.imprimir();
  folio.setBase(2);
  folio.setAltura(2);
  folio.imprimir();
  areaFolio = folio.area();
  cout << "El area del folio es "<< areaFolio << endl;
  cout << "Tablero" << endl;
  tablero.imprimir();
  cout << "Manta" << endl;
  manta.imprimir();

  return 0;
}
