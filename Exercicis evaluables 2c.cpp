#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double x{ 0.0 };
    int terms{ 0 };

    cout << "Introdueix el valor de x: ";
    cin >> x;
    cout << "Quants termes de la serie vols sumar? ";
    cin >> terms;

    while (terms < 1) {
        cout << "Com a minim 1 terme. Torna-ho a provar: ";
        cin >> terms;
    }

    double result{ 1.0 };
    double term{ 1.0 };
    int i{ 1 };


    while (i < terms) {
        term = term * x / i;
        result += term;
        ++i;
    }

    cout << "e^" << x << " amb " << terms << " termes = ";


    cout << fixed;
    cout.precision(10);
    cout << result << "\n";
    cout << "Valor de referencia exp(x) = " << exp(x) << "\n";
}