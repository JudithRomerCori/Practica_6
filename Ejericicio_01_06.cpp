// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 23/10/2023

// Fecha modificaci�n: 23/10/2023

// N�mero de ejericio: 1

// Problema planteado:Realizar un algoritmo recursivo para calcular el m�ximo com�n divisor de dos
//n�meros enteros aplicando el algoritmo de Euclides.

#include <iostream>

using namespace std;

// Funci�n recursiva para calcular el MCD utilizando el algoritmo de Euclides
int euclideanGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return euclideanGCD(b, a % b);
}

int main() {
    int num1, num2;

    // Solicitar al usuario ingresar los n�meros
    cout << "Ingrese el primer n�mero: ";
    cin >> num1;
    cout << "Ingrese el segundo n�mero: ";
    cin >> num2;

    // Calcular el MCD utilizando la funci�n recursiva
    int gcd = euclideanGCD(num1, num2);

    // Mostrar el resultado
    cout << "El MCD de " << num1 << " y " << num2 << " es: " << gcd << endl;

    return 0;
}
