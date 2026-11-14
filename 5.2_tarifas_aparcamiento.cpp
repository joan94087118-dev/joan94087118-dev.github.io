#include <iostream>
#include <iomanip>
using namespace std;

double calcularTarifa(double horas) {
    double tarifa;

    if (horas <= 3.0) {
        tarifa = 20.0;
    } else {
        // Se cobra una hora adicional por cada hora o fraccion.
        int horasAdicionales = horas - 3.0;
        if (horas - 3.0 > horasAdicionales) {
            horasAdicionales++;
        }
        tarifa = 20.0 + horasAdicionales * 5.0;
    }

    if (tarifa > 50.0) {
        tarifa = 50.0;
    }

    return tarifa;
}

int main() {
    double horas;
    double total = 0.0;

    cout << fixed << setprecision(2);
    cout << "APARCAMIENTO" << endl;
    cout << "Cliente\tHoras\tImporte" << endl;

    for (int cliente = 1; cliente <= 3; cliente++) {
        cout << "Horas estacionado del cliente " << cliente << ": ";
        cin >> horas;

        if (horas <= 0 || horas > 24) {
            cout << "Introduce un numero de horas mayor que 0 y hasta 24." << endl;
            return 1;
        }

        double importe = calcularTarifa(horas);
        total += importe;

        cout << cliente << "\t" << horas << "\t" << importe << " $" << endl;
    }

    cout << "TOTAL\t\t" << total << " $" << endl;
    return 0;
}
