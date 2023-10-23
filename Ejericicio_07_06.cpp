// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 23/10/2023

// Fecha modificaci�n: 23/10/2023

// N�mero de ejericio: 7

// Problema planteado:Realizar un algoritmo recursivo para el siguiente problema: un granjero ha
//comprado una pareja de conejos para criarlos y luego venderlos. Si la pareja de
//conejos produce una nueva pareja cada mes y la nueva pareja tarda un mes
//m�s en ser tambi�n productiva, �cu�ntos pares de conejos podr� poner a la
//venta el granjero al cabo de un a�o?
#include <iostream>

using namespace std;

// Funci�n recursiva para calcular la cantidad de parejas de conejos despu�s de un a�o
int calcularConejos(int meses) {
    if (meses == 0) {
        return 1;  // Inicialmente, solo hay una pareja de conejos
    } else if (meses == 1) {
        return 2;  // Despu�s de un mes, la pareja original es productiva y se duplica
    } else {
        // Llamada recursiva para calcular la cantidad de conejos en el mes actual
        int parejasMesAnterior = calcularConejos(meses - 1);

        // La pareja del mes anterior es productiva, pero la nueva pareja todav�a no lo es
        return parejasMesAnterior + calcularConejos(meses - 2);
    }
}

int main() {
    int meses = 12;  // N�mero de meses en un a�o

    int parejas = calcularConejos(meses);

    cout << "Despu�s de " << meses << " meses, el granjero podr� poner a la venta " << parejas << " pares de conejos." << endl;

    return 0;
}
