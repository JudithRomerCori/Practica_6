// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 23/10/2023

// Fecha modificación: 23/10/2023

// Número de ejericio: 6

// Problema planteado:Realizar un algoritmo recursivo para la siguiente función:

#include <iostream>

using namespace std;

// Función recursiva para calcular la suma de cuadrados
int calcularSumaCuadrados(int n) {
    // Caso base: si n es 1, devuelve 1^2
    if (n == 1) {
        return 1;
    }

    // Llamada recursiva para calcular la suma de cuadrados desde 1 hasta n-1
    int sumaPrevia = calcularSumaCuadrados(n - 1);

    // Suma el cuadrado de n al resultado previo
    return sumaPrevia + n * n;
}

int main() {
    int n;

    cout << "Ingrese el valor de n: ";
    cin >> n;

    if (n < 1) {
        cout << "Error: n debe ser un número positivo." << endl;
        return 1;
    }

    int resultado = calcularSumaCuadrados(n);
    cout << "Q(" << n << ") = " << resultado << endl;

    return 0;
}
