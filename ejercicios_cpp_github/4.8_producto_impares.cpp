#include <iostream>
using namespace std;

int main() {
    int producto = 1;

    for (int numero = 1; numero <= 15; numero += 2) {
        producto *= numero;
    }

    cout << "El producto de los numeros impares del 1 al 15 es: "
         << producto << endl;

    return 0;
}
