#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int terminos;
    double suma = 1.0;
    double factorial = 1.0;

    cout << "Cuantos terminos quieres utilizar? ";
    cin >> terminos;

    if (terminos <= 0) {
        cout << "Debes introducir un numero positivo." << endl;
        return 1;
    }

    for (int i = 1; i < terminos; i++) {
        factorial *= i;
        suma += 1.0 / factorial;
    }

    cout << fixed << setprecision(10);
    cout << "Aproximacion de e: " << suma << endl;
    return 0;
}
