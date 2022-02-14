# include <iostream>
using namespace std;

double* rellenarArrayNotas (int tama){
  double* array = new double [tama];
  string fumao;
  for (int i = 0 ; i < tama ; i++){
    cout << "Introduce la nota" << endl;
    getline(cin,fumao);
    array[i] = stoi(fumao);
  }
  return array;
}

double* subirNotasArray (double* array, int tama, double porcentaje){
  double* arrayNuevo = new double [tama];
  for (int i = 0; i < tama; i++){
  	arrayNuevo[i] = array[i] + array[i]*porcentaje;
  }
  return arrayNuevo;
}

void imprimeArray(double array[], int tama){
	cout << endl;
  	for (int i = 0 ; i < tama ; i++){
    	cout << array[i] << " " << endl;
    }
    cout << endl;
    cout << endl;
}

int main() {

  int numero = 5;
  double* notas = NULL;
  double* notasSubidas = NULL;
  double subidaPorcentaje = 0.20;

  notas = rellenarArrayNotas(numero);

  cout << "Notas originales: " << notas << endl;
  imprimeArray (notas, numero);

  notasSubidas = subirNotasArray(notas, numero, subidaPorcentaje);

  cout << "Notas subidas un 20%: " << notasSubidas << endl;
  imprimeArray (notasSubidas, numero);

  cout << "Notas sin modificar: " << notas << endl;
  imprimeArray (notas, numero);

	return 0;
}
