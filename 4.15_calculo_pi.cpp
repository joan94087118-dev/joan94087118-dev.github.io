#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int maxTerminos = 200000;
    double pi = 0.0;
    int primerTermino = 0;

    cout << fixed << setprecision(8);
    cout << "Termino\tAproximacion de pi" << endl;

    for (int i = 0; i < maxTerminos; i++) {
        double fraccion = 4.0 / (2 * i + 1);

        if (i % 2 == 0) {
            pi += fraccion;
        } else {
            pi -= fraccion;
        }

        // Mostramos algunos valores para que la tabla sea manejable.
        if (i < 10 || (i + 1) % 10000 == 0) {
            cout << i + 1 << "\t" << pi << endl;
        }

        int piRedondeado = pi * 100000.0 + 0.5;
        if (primerTermino == 0 && piRedondeado == 314159) {
            primerTermino = i + 1;
        }
    }

    if (primerTermino != 0) {
        cout << "\nLa primera aproximacion que redondea a 3.14159 aparece en el termino "
             << primerTermino << "." << endl;
    } else {
        cout << "\nNo se ha alcanzado 3.14159 con los primeros "
             << maxTerminos << " terminos." << endl;
    }

    return 0;
}
