#include <iostream>
using namespace std;

class ANIMALenGRANJA{
  protected:
    string especie;
    double nAnimales;
    string comidaFav;
    double nPatas;
  public:
    ANIMALenGRANJA(string especie="cerdos", double nAnimales=5, string comidaFav="puchero", double nPatas=4){
      this->especie=especie;
      this->nAnimales=nAnimales;
      this->comidaFav=comidaFav;
      this->nPatas=nPatas;
    }
    ~ANIMALenGRANJA(){
        cout << "Hasta Luego MAMA BICHO!" << endl;
     }

     void imprimir(){
       cout << "La especie son " << this->especie << " hay "<< this->nAnimales <<" cerdos y su comida favorita es " << this->comidaFav << " cada animal tiene " << this->nPatas << " patas." << endl;
     }
     //SET
     void setEspecie(string especie){
       this->especie = especie;
     }

     void setNanimales(double nAnimales){
       this->nAnimales = nAnimales;
     }

     void setComidaFav(string comidaFav){
       this->comidaFav = comidaFav;
     }

     void setNpatas(double nPatas){
       this->nPatas = nPatas;
     }

     //GET
     string getEspecie(){
       return this->especie;
     }

     double getNanimales(){
       return this->nAnimales;
     }

     string getComidaFav(){
       return this->comidaFav;
     }

     double getNpatas(){
       return this->nPatas;
     }

     void comidaAnimal(){
       cout << "El animal come " << this->comidaFav << "." << endl;
     }

};

class Zorro : public ANIMALenGRANJA{
  private:
    double diasVisitados;
  public:
    Zorro(string especie="Zorro", double nAnimales=1, string comidaFav="gallina",
          double nPatas=4, double diasVisitados=4): ANIMALenGRANJA (especie, nAnimales, comidaFav, nPatas){
      this->diasVisitados=diasVisitados;
    }

    void imprimirZorro(){
      cout << "El zorro ha visitado la granja " << this->diasVisitados << " dias." << endl;
    }

    void setDiasVisitados(double diasVisitados){
      this->diasVisitados = diasVisitados;
    }

    double getDiasVisitados(){
      return this->diasVisitados;
    }

    void otroDiaMas(){
      cout << "Realmente el zorro ha visitado la granja " << this->diasVisitados+1 << " dias." << endl;
    }

    double numTotalZorros(){
      cout << "Cuantas zorros hay?" << endl;
        cin >> nAnimales;
      cout << "Hay " << nAnimales*4 << " patas en total." << endl;
    }
  };

class Gallina : public ANIMALenGRANJA{
  private:
    double huevosDia;
    double nDiasPoniendo;
  public:
    Gallina(string especie="gallina", double nAnimales=6, string comidaFav="maiz",
          double nPatas=2, double huevosDia=3, double nDiasPoniendo=10): ANIMALenGRANJA (especie, nAnimales, comidaFav, nPatas){
          this->huevosDia=huevosDia;
          this->nDiasPoniendo=nDiasPoniendo;
    }
//SET
    void setHuevosDia(double huevosDia){
      this->huevosDia = huevosDia;
    }

    void setNDiasPoniendo(double nDiasPoniendo){
      this->nDiasPoniendo = nDiasPoniendo;
    }
//GET

    double getHuevosDia(){
      return this->huevosDia;
    }

    double NDiasPoniendo(){
      return this->nDiasPoniendo;
    }

    void huevosTotales(){
      cout << "Los huevos totales son " << this->huevosDia*nDiasPoniendo << " huevos." << endl;
    }

    int numeroGallinas(){
      cout << "Cuantas gallinas hay?" << endl;
        cin >> nAnimales;
      cout << "Hay " << nAnimales << " picos." <<  endl;
      cout << "Hay " << nAnimales*2 << "  patas." << endl;
      cout << "Hay " << (nAnimales*2)+(nAnimales) << " un total de patas y  picos." << endl;
    }

};

int main(){
  cout << "Francisco Soto Vera" << endl;
  ANIMALenGRANJA impPrimate;
  ANIMALenGRANJA impComidaAnimale;
  Zorro impDiasZorro;
  Zorro unDiaMas;
  Gallina totalHuevos;

  impPrimate.imprimir();
  impComidaAnimale.comidaAnimal();
  impDiasZorro.imprimirZorro();
  unDiaMas.otroDiaMas();
  totalHuevos.huevosTotales();

  Gallina ImpNumeroGallinas;
  ImpNumeroGallinas.numeroGallinas();

  Zorro impNumeroZorros;
  impNumeroZorros.numTotalZorros();

  return 0;
}
