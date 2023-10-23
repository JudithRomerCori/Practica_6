// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 23/10/2023

// Fecha modificación: 23/10/2023

// Número de ejericio: 3

// Problema planteado:Realizar un algoritmo recursivo, dado un vector de números enteros, retorne la suma de sus elementos.

#include <iostream>
#include <vector>

using namespace std;

// Función recursiva para calcular la suma de elementos en un vector
int sumaVectorRecursiva(const vector<int>& vec, int indice) {
    // Caso base: Si el índice es igual a cero, devuelve el primer elemento del vector
    if (indice == 0) {
        return vec[0];
    }

    // Llamada recursiva para sumar los elementos anteriores
    int sumaAnterior = sumaVectorRecursiva(vec, indice - 1);

    // Suma el elemento actual con la suma de los elementos anteriores
    return sumaAnterior + vec[indice];
}

int main() {
    vector<int> vectorDeNumeros = {1, 2, 3, 4, 5};

    // Llama a la función recursiva para calcular la suma de elementos
    int suma = sumaVectorRecursiva(vectorDeNumeros, vectorDeNumeros.size() - 1);

    // Muestra el resultado
    cout << "La suma de los elementos del vector es: " << suma << endl;

    return 0;
}
