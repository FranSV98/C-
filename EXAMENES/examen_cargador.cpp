#include <iostream>
using namespace std;

class Cargador{
  private:
    bool transmision;
    //string longitud;
    //string tipoE

  private:
    void setTransmision(bool transmision){
      this->transmision = transmision;
    }
  public:
    // Constructor
    Cargador(){
      this->transmision = false; // Solo carga o transfiere datos
    }

    bool getTransmision (){
      return this->transmision;
    }
    void arrancar(){
      this->setTransmision(true);
    }
    void apagar(){
      this->setTransmision(false);
    }
    void imprimir(){
      if (this->transmision){
        cout << "Carga y transfiere datos";
      } else {
        cout << "Solo carga";
      }
      cout << endl;
    }
};

int main(){
  //NOMBRE
  cout << "Francisco Soto Vera \n";

  Cargador miCargador;
  miCargador.imprimir();

  return 0;
}
