// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 23/10/2023

// Fecha modificación: 23/10/2023

// Número de ejericio: 5

// Problema planteado:Realizar un algoritmo recursivo para comparar si dos vectores son iguales.

#include <iostream>
#include <vector>

using namespace std;

// Función recursiva para comparar dos vectores
bool sonVectoresIguales(const vector<int>& vector1, const vector<int>& vector2, int indice) {
    // Si el índice es negativo, ambos vectores son iguales
    if (indice < 0) {
        return true;
    }

    // Compara los elementos en el índice actual
    if (vector1[indice] != vector2[indice]) {
        return false;
    }

    // Llamada recursiva para el siguiente índice
    return sonVectoresIguales(vector1, vector2, indice - 1);
}

int main() {
    vector<int> vectorA = {1, 2, 3, 4, 5};
    vector<int> vectorB = {1, 2, 3, 4, 5};

    if (vectorA.size() != vectorB.size()) {
        cout << "Los vectores no son iguales." << endl;
    } else {
        bool iguales = sonVectoresIguales(vectorA, vectorB, vectorA.size() - 1);
        if (iguales) {
            cout << "Los vectores son iguales." << endl;
        } else {
            cout << "Los vectores no son iguales." << endl;
        }
    }

    return 0;
}
