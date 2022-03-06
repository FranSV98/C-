#include<iostream>
using namespace std;

class Circulo {
private:
  double radio;
  double pi;
public:
   //CONSTRUCTOR
  Circulo(double radio = 1, double pi = 1){
    setRadio(radio);
    setPi(pi);
  }
  void setRadio(double radio){
    (radio > 0) ? this->radio = radio : this->radio = 1;
  }
  void setPi(double pi){
    (pi > 0) ? this->pi = pi : this->pi = 1;
  }
  //GET
  double getRadio(){
    return this->radio;
  }
  double getPi(){
    return this->pi;
  }
  //METODOS
  double area(){
    return this->radio*2 * this->pi;
  }
};


int main(){
  double areaCirculo;
  Circulo circulo(5,3.1416);


  areaCirculo = circulo.area();
  cout << "El area del circulo es "<< areaCirculo << endl;

  return 0;
}
