#include <iostream>
#include <string>
using namespace std;
int main() {
    //Ejercicio 1
    string frase = "Hola, esto es un ejercicio.";
    cout << frase << endl;
    //Ejercicio 2
    string cadena = "Ejemplo";
    cout << "Tamanio de la cadena: " << cadena.size() << endl;
    cout << "Esta la cadena vacia? " << (cadena.empty() ? "Sí" : "No") << endl;
    //Ejercicio 3
    string cadena1 = "Hola ";
    string cadena2 = "mundo";
    string resultado = cadena1 + cadena2;
    cout << "Cadena resultante: " << resultado << endl;
    //Ejercicio 4
    string cadena3 = "Este es un ejemplo de subcadena.";
    string subcadena = "ejemplo";
    size_t indice = cadena.find(subcadena);
    if (indice != std::string::npos) {
        cout << "Subcadena encontrada en la posicion: " << indice << endl;
        cadena3.replace(indice, subcadena.length(), "nuevo ejemplo");
        cout << "Cadena resultante: " << cadena << endl;
    } else {
        cout << "Subcadena no encontrada." << endl;
    }
    //Ejercicio 5
    string cadena4 = "Manipulacion avanzada de strings";

    string subcadena1 = cadena.substr(0, 12);
    cadena4.insert(13, " avanzada de");
    cout << "Subcadena: " << subcadena1 << endl;
    cout << "Cadena resultante: " << cadena4 << endl;


    return 0;

}

