#include <iostream>
using std::string;
// Prototipo de funciones
string aMayuscula(string cadena);
string aMinuscula(string cadena);
int main() {
  string cadena = "Parzibyte.me";

  std::cout << "Original: " + cadena;
  string mayuscula = aMayuscula(cadena);
  std::cout << "\nMayúscula: " + mayuscula;
  string minuscula = aMinuscula(cadena);
  std::cout << "\nMinúscula: " + minuscula;
}

string aMayuscula(string cadena) {
  for (int i = 0; i < cadena.length(); i++) cadena[i] = toupper(cadena[i]);
  return cadena;
}
string aMinuscula(string cadena) {
  for (int i = 0; i < cadena.length(); i++) cadena[i] = tolower(cadena[i]);
  return cadena;
}