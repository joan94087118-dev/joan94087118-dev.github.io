#include <iostream>
#include <string>
using namespace std;

int main() {
    string numero;

    cout << "Introduce un numero de cuatro cifras: ";
    cin >> numero;

    if (numero.length() != 4) {
        cout << "El numero debe tener exactamente cuatro cifras." << endl;
        return 1;
    }

    // Sumamos 7 a cada cifra y nos quedamos con la ultima cifra.
    for (int i = 0; i < 4; i++) {
        if (numero[i] < '0' || numero[i] > '9') {
            cout << "Solo se permiten cifras." << endl;
            return 1;
        }

        int cifra = numero[i] - '0';
        cifra = (cifra + 7) % 10;
        numero[i] = '0' + cifra;
    }

    // Intercambiamos la primera cifra con la tercera
    // y la segunda con la cuarta.
    char auxiliar = numero[0];
    numero[0] = numero[2];
    numero[2] = auxiliar;

    auxiliar = numero[1];
    numero[1] = numero[3];
    numero[3] = auxiliar;

    cout << "Numero cifrado: " << numero << endl;
    return 0;
}
