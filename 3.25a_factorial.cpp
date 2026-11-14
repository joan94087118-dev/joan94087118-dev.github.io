#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;

    cout << "Introduce un numero entero no negativo: ";
    cin >> n;

    if (n < 0) {
        cout << "El numero no puede ser negativo." << endl;
        return 1;
    }

    if (n > 20) {
        cout << "El numero es demasiado grande (maximo 20)." << endl;
        return 1;
    }

    int contador = 1;
    while (contador <= n) {
        factorial *= contador;
        contador++;
    }

    cout << n << "! = " << factorial << endl;
    return 0;
}
