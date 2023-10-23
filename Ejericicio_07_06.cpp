// Materia: Programación I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creación: 23/10/2023

// Fecha modificación: 23/10/2023

// Número de ejericio: 7

// Problema planteado:Realizar un algoritmo recursivo para el siguiente problema: un granjero ha
//comprado una pareja de conejos para criarlos y luego venderlos. Si la pareja de
//conejos produce una nueva pareja cada mes y la nueva pareja tarda un mes
//más en ser también productiva, ¿cuántos pares de conejos podrá poner a la
//venta el granjero al cabo de un año?
#include <iostream>

using namespace std;

// Función recursiva para calcular la cantidad de parejas de conejos después de un año
int calcularConejos(int meses) {
    if (meses == 0) {
        return 1;  // Inicialmente, solo hay una pareja de conejos
    } else if (meses == 1) {
        return 2;  // Después de un mes, la pareja original es productiva y se duplica
    } else {
        // Llamada recursiva para calcular la cantidad de conejos en el mes actual
        int parejasMesAnterior = calcularConejos(meses - 1);

        // La pareja del mes anterior es productiva, pero la nueva pareja todavía no lo es
        return parejasMesAnterior + calcularConejos(meses - 2);
    }
}

int main() {
    int meses = 12;  // Número de meses en un año

    int parejas = calcularConejos(meses);

    cout << "Después de " << meses << " meses, el granjero podrá poner a la venta " << parejas << " pares de conejos." << endl;

    return 0;
}
