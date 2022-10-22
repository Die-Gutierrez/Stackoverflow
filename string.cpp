#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cadena = "Diego Gutierrez";
    string cadena2 ("Hola mundo");

    // Conseguiendo el tamanio de caracteres en la cadena.
    cout<<"Tamanio de cadena : "<<cadena.size()<<endl;
    cout<<"Tamanio de cadena2 : "<<cadena2.length()<<endl;

    // Capacidad actual del objeto de class string, llamado cadena.
    cout<<"Capacidad del objeto <cadena> : "<<cadena.capacity()<<endl;

    // Desfragmentando una parte del texto sin afectar al texto original.
    cout<<"Fragmento de una cadena de texto: "<<cadena.substr(6,9)<<endl;
    cout<<cadena<<endl;
    string cadena3;
    cadena3 = cadena.substr(6,9);
    cout<<cadena3<<endl;

    // Limpiando un objeto de clase string de su cadena de texto.
    cout<<cadena3<<endl<<"Limpiando ..."<<endl;
    cadena3.clear(); // tambien se puede con "cadena3.erase();"
    cout<<"'"<<cadena3<<"'"<<endl;

    //Cambiando los textos de las cadenas.
    cout<<"Cadena tiene : "<<cadena<<endl;
    cout<<"Cadena2 tiene : "<<cadena2<<endl;
    cout<<"Cambiando ..."<<endl;
    cadena.swap(cadena2);
    cout<<"Nuevo texto de cadena : "<<cadena<<endl;
    cout<<"Nuevo texto de Cadena2 : "<<cadena2<<endl;

    // Si la cadena esta vacia.
    cadena.erase();
    // Tambien puede "if(!cadena.empty)", negamos el valor que arroje, ya que el if si no ponemos nada, se compara con true,
    // Entonces "if(!cadena.empty()) = niega lo que salga y se compara con 'true'"
    // if(cadena.empty()) = el resultado lo compara con 'true'.
    if(!cadena.empty()) // Retorna 0 si esta lleno y 1 si esta vacio
    {
        cout<<"La cadena esta vacia"<<endl;
    }
    else
    {
        cout<<"La cadena tiene texto y es : "<<cadena<<endl;
    }
    // Insertando un string.
    cadena = "Diego ";
    cadena2 = "Alonso ";
    cadena3 = "Guti ";
    cout<<cadena.insert(6,cadena2)<<endl;
    cout<<cadena.insert(13, cadena3, 0, 2)<<endl;
    cout<<cadena<<endl;
    // cadena.insert('apartir de que linea vamos a insertar el texto', que texto vamos a colocar ahi, ingremos apartir de que parte insertar)

    // Asignando caracteres a una cadena
    cadena.erase();
    cout<<cadena.assign("hola perro")<<endl;
    cout<<cadena.assign("Rata", 2)<<endl;
    cout<<cadena.assign(cadena2)<<endl;
    cout<<cadena.assign(20,'*')<<endl;
    cout<<cadena<<endl;

    // COPY
    char buffer[20];
    string str1 ("Test string...");
    size_t length = str1.copy(buffer,14);
    buffer[length]='\0';
    cout << "buffer contains: " << buffer << '\n';
    return 0;

    //NOTA: (el primer numero siempre indica apartir de que posicion se iniciara el string, y el segundo la cantidad de caracteres)
    //(en caso que no haya 2 numeros, se considera partiendo de 0, y el siguietne numero el total de numeros a copiar)

    // Replace 
    std::string base="this is a test string.";
  std::string str2="n example";
  std::string str3="sample phrase";
  std::string str4="useful.";

  // replace signatures used in the same order as described above:

  // Using positions:                 0123456789*123456789*12345
  std::string str=base;           // "this is a test string."
  str.replace(9,5,str2);          // "this is an example string." (1)
  str.replace(19,6,str3,7,6);     // "this is an example phrase." (2)
  str.replace(8,10,"just a");     // "this is just a phrase."     (3)
  str.replace(8,6,"a shorty",7);  // "this is a short phrase."    (4)
  str.replace(22,1,3,'!');        // "this is a short phrase!!!"  (5)

  // Using iterators:                                               0123456789*123456789*
  str.replace(str.begin(),str.end()-3,str3);                    // "sample phrase!!!"      (1)
  str.replace(str.begin(),str.begin()+6,"replace");             // "replace phrase!!!"     (3)
  str.replace(str.begin()+8,str.begin()+14,"is coolness",7);    // "replace is cool!!!"    (4)
  str.replace(str.begin()+12,str.end()-4,4,'o');                // "replace is cooool!!!"  (5)
  str.replace(str.begin()+11,str.end(),str4.begin(),str4.end());// "replace is useful."    (6)
  std::cout << str << '\n';

    return 0;
}