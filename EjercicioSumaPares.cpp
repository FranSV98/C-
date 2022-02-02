#include <iostream>

int main()
{
    int suma = 0;

    for( int i = 1; i <= 500; i++ ){
        if( i % 2 == 0 ) suma += i;
    }

    std::cout << "\nLa suma de los primeros 500 numeros pares es: " << suma << std::endl;

    return 0;
}
