// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 23/10/2023

// Fecha modificaci�n: 23/10/2023

// N�mero de ejericio: 6

// Problema planteado:Realizar un algoritmo recursivo para la siguiente funci�n:

#include <iostream>

using namespace std;

// Funci�n recursiva para calcular la suma de cuadrados
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
        cout << "Error: n debe ser un n�mero positivo." << endl;
        return 1;
    }

    int resultado = calcularSumaCuadrados(n);
    cout << "Q(" << n << ") = " << resultado << endl;

    return 0;
}
