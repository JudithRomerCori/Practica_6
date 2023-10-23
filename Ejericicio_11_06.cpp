// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 23/10/2023

// Fecha modificación: 23/10/2023

// Número de ejericio: 11

// Problema planteado:Realizar un algoritmo recursivo para elaborar un programa en el que dado un entero n > 1, calcule e imprima los elementos correspondientes a la conjetura de Ullman (en honor al matemático Ullman) que consiste en lo siguiente:
//• Empiece con cualquier entero positivo.
//• Si es par, divídalo entre 2; si es impar multiplíquelo por 3 y agréguele 1.
//• Obtenga enteros sucesivamente repitiendo el proceso.
//Al final se obtendrá el número 1, independientemente del entero inicial. Por ejemplo, cuando el entero inicial es 26, la secuencia será:
//26 13 40 20 10 5 16 8 4 2 1
#include <iostream>

using namespace std;

// Función recursiva para calcular e imprimir la conjetura de Ullman
void conjeturaUllman(int n) {
    cout << n << " ";  // Imprime el número actual

    if (n == 1) {
        return;  // Caso base: hemos llegado al número 1, terminamos
    }

    if (n % 2 == 0) {
        // Si el número es par, divídelo por 2
        conjeturaUllman(n / 2);
    } else {
        // Si el número es impar, multiplica por 3 y agrega 1
        conjeturaUllman(3 * n + 1);
    }
}

int main() {
    int n;

    cout << "Ingrese un entero positivo mayor que 1: ";
    cin >> n;

    if (n <= 1) {
        cout << "El número debe ser mayor que 1." << endl;
        return 1;
    }

    conjeturaUllman(n);

    return 0;
}
