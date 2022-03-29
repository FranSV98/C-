#include <iostream>
using namespace std;

class Mueble{
  private:
    string material;
    string dimensiones;
  public:
    Mueble(string material="madera", string dimensiones="25x30x35"){
      this->material=material;
      this->dimensiones=dimensiones;
    }
    ~Mueble(){
        cout << "Hasta Luego MAMA BICHO!" << endl;
    }
    void imprimir(){
        cout << " Material: " << this->material << " Dimensiones: " << this->dimensiones << "." << endl;
    }
    void setMaterial(string material){
        this->material = material;
    }
    void setDimensiones(string dimensiones){
        this->dimensiones = dimensiones;
    }
    string getMaterial(){
        return this->material;
    }
    string getDimensiones(){
        return this->dimensiones;
    }
  };

  class Mesa : public Mueble{
   private:
     int numPatas;
     string forma;
   public:
     Mesa (string material=" Metal ", string dimensiones=" 12x3x0.2 ", int numPatas=4, string forma=" redonda ") : Mueble (material, dimensiones){
       this->numPatas=numPatas;
       this->forma=forma;
     }
     void setNumPatas(int numPatas){
         this->numPatas = numPatas;
     }
     void setForma(string forma){
         this->forma = forma;
     }
     int getNumPatas(){
         return this->numPatas;
     }
     string getForma(){
         return this->forma;
     }
     void imprimirMiMesa(){
       Mueble::imprimir();
       cout << " Numero de patas: " << this->numPatas << " Forma: " << this->forma << endl;
     }
 };

 class Armario : protected Mueble{
  private:
    int numBaldas;
    string tPuerta;
  public:
    Armario (string material=" madera ", string dimensiones=" 25x13x2 ", int numBaldas=6, string tPuerta=" corredera") : Mueble (material, dimensiones){
      this->numBaldas=numBaldas;
      this->tPuerta=tPuerta;
    }
    void setNumBaldas(int numBaldas){
        this->numBaldas = numBaldas;
    }
    void settPuerta(string tPuerta){
        this->tPuerta = tPuerta;
    }
    int getNumPatas(){
        return this->numBaldas;
    }
    string getForma(){
        return this->tPuerta;
    }
    void imprimirMiArmario(){
      Mueble::imprimir();
      cout << " Numero de baldas: " << this->numBaldas << " Tipo de puerta: " << this->tPuerta  << endl;
    }
};


int main(){
  Mueble impMueble;
  impMueble.imprimir();

  Mesa miMesa;
  miMesa.imprimirMiMesa();

  Armario miArmario;
  miArmario.imprimirMiArmario();

  return 0;
}
