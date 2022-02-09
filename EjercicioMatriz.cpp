#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100][100],filas,columnas;

	cout<<"Indica el numero de filas: "; cin>>filas;
	cout<<"Indica el numero de columnas: "; cin>>columnas;

	//Rellenando la matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Indica con X/O ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}

	cout<<"\nMostrando matriz\n\n";

	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}


	getch();
	return 0;
}
