#include <iostream>
#include <string>

using namespace std;

int main()
{
    const char *words[4] = {"uno", "dos", "tres", "cuatro"};
    string cadenas[4] = {"mundo "};
    string cad ("Hola");

    cout<<cadenas[0]<<cad<<endl;

    for(int i=0;i<4;i++)
    {
        cout<<words[i]<<endl;
    } 
    for(int i=0;i<4;i++)
    {
        cout<<"Ingrese un texto en ["<<i<<"]: ";
        fflush(stdin); getline(cin, cadenas[i]);
    }
    for(int i=0;i<4;i++)
    {
        cout<<cadenas[i]<<endl;
        cout<<cadenas->size()<<endl;
    }

    string cadena = "Parzibyte.me";

    std::cout << "Original: " + cadena;
    // Recorrer toda la cadena
    for (int i = 0; i < cadena.length(); i++) {
    // Y cambiar cada letra por su representación
    // mayúscula
    cadena[i] = toupper(cadena[i]);
    }
    std::cout << "\nMayúscula: " + cadena;
    // Para convertir a minúscula se usa tolower
    // Recorrer toda la cadena
    for (int i = 0; i < cadena.length(); i++) {
    // Y cambiar cada letra por su representación
    // minúscula
    cadena[i] = tolower(cadena[i]);
    }
    std::cout << "\nMinúscula: " + cadena;

    return 0;
}