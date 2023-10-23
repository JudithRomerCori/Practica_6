// Materia: Programaci�n I, Paralelo 1

// Autor: Judith Marisol Romero Cori

// Fecha creaci�n: 23/10/2023

// Fecha modificaci�n: 23/10/2023

// N�mero de ejericio: 9

// Problema planteado:Realizar un algoritmo recursivo para Generar la secuencia: 1, 1, 2, 4, 8, 16, 23,28, 38, 49,..., para n t�rminos
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    // Solicitar al usuario el n�mero de t�rminos que desea generar
    cout << "Ingrese el n�mero de t�rminos a generar: ";
    cin >> n;

    vector<int> sequence;

    // Los primeros dos t�rminos son 1
    sequence.push_back(1);
    sequence.push_back(1);

    // Generar los siguientes t�rminos
    for (int i = 2; i < n; i++) {
        int term;

        if (i < 6) {
            term = sequence[i - 1] * 2;
        } else if (i == 6) {
            term = sequence[i - 1] + sequence[i - 2] + sequence[i - 4] + sequence[i - 5];
        } else {
            term = sequence[i - 1] + sequence[i - 2] + sequence[i - 4] + sequence[i - 5] - sequence[i - 6];
        }

        sequence.push_back(term);
    }

    // Mostrar la secuencia
    cout << "Secuencia generada:\n";
    for (int i = 0; i < n; i++) {
        cout << sequence[i] << " ";
    }

    cout << endl;

    return 0;
}
