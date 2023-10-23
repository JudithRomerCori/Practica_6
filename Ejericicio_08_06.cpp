// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 23/10/2023

// Fecha modificaci�n: 23/10/2023

// N�mero de ejericio: 8

// Problema planteado:Realizar un algoritmo recursivo que nos diga si una cadena de caracteres es
//sim�trica
#include <iostream>

using namespace std;

// Funci�n recursiva para verificar si una cadena es sim�trica
bool esSimetrica(const string& cadena, int inicio, int fin) {
    if (inicio >= fin) {
        return true; // La cadena es sim�trica si no quedan caracteres por comparar
    }

    if (cadena[inicio] != cadena[fin]) {
        return false; // Los caracteres en los extremos no son iguales, la cadena no es sim�trica
    }

    // Llamada recursiva para verificar los caracteres restantes
    return esSimetrica(cadena, inicio + 1, fin - 1);
}

int main() {
    string cadena;

    cout << "Ingrese una cadena de caracteres: ";
    cin >> cadena;

    int longitud = cadena.length();
    bool simetrica = esSimetrica(cadena, 0, longitud - 1);

    if (simetrica) {
        cout << "La cadena es sim�trica." << endl;
    } else {
        cout << "La cadena no es sim�trica." << endl;
    }

    return 0;
}
