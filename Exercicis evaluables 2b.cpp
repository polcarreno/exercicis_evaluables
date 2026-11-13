
#include <iostream>
using namespace std;

int main() {
    int terms{ 0 };
    cout << "Quants termes de la serie vols sumar? ";
    cin >> terms;

    while (terms < 1) {
        cout << "Com a minim 1 terme. Torna-ho a provar: ";
        cin >> terms;
    }

    double e{ 1.0 };         
    double factorial{ 1.0 }; 
    int i{ 1 };              

    
    while (i < terms) {
        factorial *= i;    
        e += 1.0 / factorial;
        ++i;
    }

    
    cout << fixed;
    cout.precision(15);
    cout << "Aproximacio de e amb " << terms << " termes: " << e << "\n";
}