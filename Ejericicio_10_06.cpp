// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 23/10/2023

// Fecha modificaci�n: 23/10/2023

// N�mero de ejericio: 10

// Problema planteado:Realizar un algoritmo recursivo para calcular el coeficiente binomial a partir de
//la lectura de dos n�meros enteros, a partir de la relaci�n:

#include <iostream>

using namespace std;

// Funci�n recursiva para calcular el factorial de un n�mero
unsigned int factorial(unsigned int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

// Funci�n recursiva para calcular el coeficiente binomial
unsigned int coeficienteBinomial(unsigned int n, unsigned int m) {
    if (n < m) {
        cout << "Error: n debe ser mayor o igual a m" << endl;
        return 0;
    }

    if (m == 0 || m == n) {
        return 1;
    }

    return coeficienteBinomial(n - 1, m - 1) + coeficienteBinomial(n - 1, m);
}

int main() {
    unsigned int n, m;

    cout << "Ingrese el valor de n: ";
    cin >> n;
    cout << "Ingrese el valor de m: ";
    cin >> m;

    unsigned int resultado = coeficienteBinomial(n, m);
    cout << "El coeficiente binomial de " << n << " sobre " << m << " es igual a " << resultado << endl;

    return 0;
}
