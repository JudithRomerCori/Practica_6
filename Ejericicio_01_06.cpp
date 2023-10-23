// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 23/10/2023

// Fecha modificación: 23/10/2023

// Número de ejericio: 1

// Problema planteado:Realizar un algoritmo recursivo para calcular el máximo común divisor de dos
//números enteros aplicando el algoritmo de Euclides.

#include <iostream>

using namespace std;

// Función recursiva para calcular el MCD utilizando el algoritmo de Euclides
int euclideanGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return euclideanGCD(b, a % b);
}

int main() {
    int num1, num2;

    // Solicitar al usuario ingresar los números
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    // Calcular el MCD utilizando la función recursiva
    int gcd = euclideanGCD(num1, num2);

    // Mostrar el resultado
    cout << "El MCD de " << num1 << " y " << num2 << " es: " << gcd << endl;

    return 0;
}
