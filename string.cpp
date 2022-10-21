#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cadena;

    cout<<"Ingrese un texto: ";
    fflush(stdin); // Se usa para limpiar el buffer y evitar problemas al ingresar la cadena de texto.
    getline(cin, cadena); // Es una funcion, que nos permite mediante 'cin' ingresar elementos o caracteres y 'cadena' es la variable 
                          // que recibe todo lo que estamos ingresando.

    return 0;
}