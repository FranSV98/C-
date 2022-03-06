#include<iostream>
using namespace std;

class Triangulo {
private:
  double lado1;
  double lado2;
  double lado3;
public:
   //CONSTRUCTOR
  Triangulo(double lado1 = 1, double lado2 = 1, double lado3 = 1){
    setLado1(lado1);
    setLado2(lado2);
    setLado3(lado3);
  }
  void setLado1(double lado1){
    (lado1 > 0) ? this->lado1 = lado1 : this->lado1 = 1;
  }
  void setLado2(double lado2){
    (lado2 > 0) ? this->lado2 = lado2 : this->lado2 = 1;
  }
  void setLado3(double lado3){
    (lado3 > 0) ? this->lado3 = lado3 : this->lado3 = 1;
  }
  //GET
  double getLado1(){
    return this->lado1;
  }
  double getLado2(){
    return this->lado2;
  }
  double getLado3(){
    return this->lado3;
  }
  //METODOS
  double perimetro(){
    return this->lado1 + this->lado2 + this->lado3;
  }
};

  double area(){
    return this->lado1 + this->lado2 + this->lado3;
  }
};


int main(){
  double perimetroTriangulo;
  Triangulo triangulo(5,5,5);
  perimetroTriangulo = triangulo.perimetro();
  cout << "El perimeto del triangulo es "<< perimetroTriangulo << endl;

  double areaTriangulo;
  Triangulo triangulo(5,5,5);
  areaTriangulo = triangulo.area();
  cout << "El area del triangulo es "<< areaTriangulo << endl;

  return 0;
}
