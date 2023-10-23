// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 23/10/2023

// Fecha modificaci�n: 23/10/2023

// N�mero de ejericio: 3

// Problema planteado:Realizar un algoritmo recursivo, dado un vector de n�meros enteros, retorne la suma de sus elementos.

#include <iostream>
#include <vector>

using namespace std;

// Funci�n recursiva para calcular la suma de elementos en un vector
int sumaVectorRecursiva(const vector<int>& vec, int indice) {
    // Caso base: Si el �ndice es igual a cero, devuelve el primer elemento del vector
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

    // Llama a la funci�n recursiva para calcular la suma de elementos
    int suma = sumaVectorRecursiva(vectorDeNumeros, vectorDeNumeros.size() - 1);

    // Muestra el resultado
    cout << "La suma de los elementos del vector es: " << suma << endl;

    return 0;
}
