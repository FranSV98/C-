#include <iostream>
using namespace std;

class Tablero{
private:
    int filas;
    int columnas;
    string **tablero;

    void imprimirLinea(){
      for (int j = 0 ; j < this->columnas ; j++){
        cout << "--" ;
      }
      cout << "-" << endl;
    }

  public:
    Tablero(){
      this->filas = 8;
      this->columnas = 8;
      tablero = new string*[filas];

      for (int i = 0 ; i < filas ; i++){
        tablero[i] = new string[columnas];
      }

      rellenarTablero("A");
    }

    void rellenarTablero(string relleno){
      for (int i = 0 ; i < this->filas ; i++){
        for (int j = 0 ; j < this->columnas ; j++){
          tablero[i][j] = relleno;
        }
      }
    }



    void imprimir(){
      this->imprimirLinea();
      for (int i = 0 ; i < this->filas ; i++){
        cout << "|";
        for (int j = 0 ; j < this->columnas ; j++){
          cout << tablero[i][j] << "|";
        }
        cout << endl;
        this->imprimirLinea();
      }
    }

};

int main(){
  Tablero tablero;
  cout << "Con que quieres rellenar el tablero?" << endl;
  tablero.imprimir();

  return 0;
}