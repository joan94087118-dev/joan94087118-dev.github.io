#include <iostream>
using namespace std;

void moverDiscos(int numeroDiscos, int origen, int destino, int auxiliar) {
    if (numeroDiscos == 1) {
        cout << origen << " -> " << destino << endl;
    } else {
        // Movemos los discos superiores a la varilla auxiliar.
        moverDiscos(numeroDiscos - 1, origen, auxiliar, destino);

        // Movemos el disco mas grande a su destino.
        cout << origen << " -> " << destino << endl;

        // Movemos los discos de la varilla auxiliar al destino.
        moverDiscos(numeroDiscos - 1, auxiliar, destino, origen);
    }
}

int main() {
    int discos;

    cout << "Cuantos discos quieres mover? ";
    cin >> discos;

    if (discos <= 0) {
        cout << "El numero de discos debe ser positivo." << endl;
        return 1;
    }

    cout << "Movimientos para resolver las Torres de Hanoi:" << endl;
    moverDiscos(discos, 1, 3, 2);

    return 0;
}
