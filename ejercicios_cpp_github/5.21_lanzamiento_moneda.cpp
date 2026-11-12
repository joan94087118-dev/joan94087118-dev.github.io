#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int flip() {
    return rand() % 2; // 0 = cruz, 1 = cara
}

int main() {
    int caras = 0;
    int cruces = 0;

    srand(static_cast<unsigned int>(time(0)));

    for (int lanzamiento = 1; lanzamiento <= 100; lanzamiento++) {
        int resultado = flip();

        if (resultado == 1) {
            cout << "Lanzamiento " << lanzamiento << ": Cara" << endl;
            caras++;
        } else {
            cout << "Lanzamiento " << lanzamiento << ": Cruz" << endl;
            cruces++;
        }
    }

    cout << "\nResultados finales:" << endl;
    cout << "Caras: " << caras << endl;
    cout << "Cruces: " << cruces << endl;

    return 0;
}
