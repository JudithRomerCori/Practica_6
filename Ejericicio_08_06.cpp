// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 23/10/2023

// Fecha modificación: 23/10/2023

// Número de ejericio: 8

// Problema planteado:Realizar un algoritmo recursivo que nos diga si una cadena de caracteres es
//simétrica
#include <iostream>

using namespace std;

// Función recursiva para verificar si una cadena es simétrica
bool esSimetrica(const string& cadena, int inicio, int fin) {
    if (inicio >= fin) {
        return true; // La cadena es simétrica si no quedan caracteres por comparar
    }

    if (cadena[inicio] != cadena[fin]) {
        return false; // Los caracteres en los extremos no son iguales, la cadena no es simétrica
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
        cout << "La cadena es simétrica." << endl;
    } else {
        cout << "La cadena no es simétrica." << endl;
    }

    return 0;
}
