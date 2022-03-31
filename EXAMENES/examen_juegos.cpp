#include <iostream>
using namespace std;

class Juego{
  protected:
  string nombre;
  double precio;
  public:
    Juego(string nombre="CSGO", double precio=59.99){
      this->nombre=nombre;
      this->precio=precio;
    }
    ~Juego(){
        cout << "Hasta Luego MAMA BICHO!" << endl;
     }
      void imprimir(){
        cout << "El juego es: " << this->nombre << " y su precio es: " << this->precio <<"." << endl;
      }

      void descuento(){
        cout << "El juego es: " << this->nombre << " y su precio con descuento es: " << this->precio-10 <<"." << endl;
      }

      void setNombre(string nombre){
        this->nombre = nombre;
      }

      void setPrecio(double precio){
        this->precio = precio;
      }

      string getNombre(){
        return this->nombre;
      }

      double getPrecio(){
        return this->precio;
      }
    };

  class Videojuego : public Juego{
    protected:
      string plataforma;
    public:
      Videojuego(string nombre="CSGO", double precio=59.99 ,string plataforma="PC") : Juego (nombre, precio){
        this->plataforma = plataforma;
      }

      void setPlataforma(string plataforma){
        this->plataforma = plataforma;
      }

      string getPlataforma(){
        return this->plataforma;
      }

      void imprimirMiVideoJ(){
          cout << "El juego es: " << this->nombre << " y su precio es: " << this->precio <<" y su plataforma es " << this->plataforma << "." << endl;
      }

      /*double nuevoDescuento(){
        if this->precio = 49.99
          this->precio*0.2            RAYADA MENTAL Nº1
            cout <<"Esto es nuevo" << this->precio << "." << endl;
      }*/
  };

  class JuegoMesa : public Juego{
    protected:
      double maximo;
      double minimo;
    public:
      JuegoMesa(string nombre="Parchis", double precio=19.99 ,string plataforma=".", double maximo=4, double minimo=2) : Juego (nombre, precio){
        this->maximo = maximo;
        this->minimo = minimo;
      }

      void setMaximo(double maximo){
        this->maximo = maximo;
      }

      void setMinimo(double minimo){
        this->minimo = minimo;
      }

      double getMaximo(){
        return this->maximo;
      }

      double getMinimo(){
        return this->minimo;
      }

      void imprimirMiJuegoM(){
          cout << "El juego es: " << this->nombre << " y su precio es: " << this->precio << " el maximo de jugadores es " << this->maximo << " Y el minimo es " << this->minimo <<  endl;
      }
  };


int main(){
  cout << "Francisco Soto" << endl;
  Juego impJuego;
  Juego desJuego;
  Videojuego impVideoJ;
  JuegoMesa impJuegoM;
  impJuego.imprimir();
  desJuego.descuento();
  impVideoJ.imprimirMiVideoJ();
  impJuegoM.imprimirMiJuegoM();

  ///Videojuego impNdesc;
  ///impNdesc.nuevoDescuento();

  return 0;
}
