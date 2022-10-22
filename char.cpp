#include <iostream>
#include <string>

using namespace std;

string mayus(string cadena);
string mini(string cadena);

int main()
{
    string cadena[5];
    string mayuscula[5];
    string miniscula[5];

    for(int i=0;i<5;i++)
    {
        cout<<"Ingrese un texto: "; fflush(stdin); getline(cin, cadena[i]);
    }
    for(int i=0;i<5;i++)
    {
        mayuscula[i] = mayus(cadena[i]);
        cout<<mayuscula[i]<<endl;
    }


    return 0;
}
string mayus(string cadena)
{
    for(int i=0;i<cadena.size();i++)
    {
        cadena[i] = toupper(cadena[i]);
    }
    return cadena;
}
string mini(string cadena)
{
    for(int i=0;i<cadena.size();i++)
    {
        cadena[i] = tolower(cadena[i]);
    }
    return cadena;
}