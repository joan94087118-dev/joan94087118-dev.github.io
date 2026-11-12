#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x;
    int terminos;
    double suma = 1.0;
    double termino = 1.0;

    cout << "Introduce el valor de x: ";
    cin >> x;
    cout << "Cuantos terminos quieres utilizar? ";
    cin >> terminos;

    if (terminos <= 0) {
        cout << "Debes introducir un numero positivo." << endl;
        return 1;
    }

    for (int i = 1; i < terminos; i++) {
        termino = termino * x / i;
        suma += termino;
    }

    cout << fixed << setprecision(10);
    cout << "Aproximacion de e elevado a " << x << ": " << suma << endl;
    return 0;
}
