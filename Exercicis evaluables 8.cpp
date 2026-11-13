#include <iostream>
#include <cmath>
using namespace std;

double calculateCharges(double hours) {
    double charge{ 20.0 };

    if (hours > 3.0) {
        charge += 5.0 * ceil(hours - 3.0);
    }

    if (charge > 50.0) {
        charge = 50.0;
    }

    return charge;
}

void printRow(const char* label, double hours, double charge) {
    cout << left;
    cout.width(8);
    cout << label;

    cout << right;
    cout.precision(1);
    cout.width(8);
    cout << hours;

    cout.precision(2);
    cout.width(12);
    cout << charge << "\n";
}

int main() {
    const int customers{ 3 };
    double hours[customers]{};
    double totalHours{ 0.0 };
    double totalCharges{ 0.0 };

    for (int i{ 0 }; i < customers; ++i) {
        cout << "Hores aparcades pel cotxe " << i + 1 << ": ";
        cin >> hours[i];

        while (hours[i] < 0 || hours[i] > 24) {
            cout << "Ha d'estar entre 0 i 24. Torna-ho a provar: ";
            cin >> hours[i];
        }
    }

    cout << "\n";
    cout << left;
    cout.width(8);
    cout << "Car";
    cout << right;
    cout.width(8);
    cout << "Hours";
    cout.width(12);
    cout << "Charge" << "\n";

    cout << fixed;

    const char* labels[customers]{ "1", "2", "3" };

    for (int i{ 0 }; i < customers; ++i) {
        double charge{ calculateCharges(hours[i]) };
        totalHours += hours[i];
        totalCharges += charge;

        printRow(labels[i], hours[i], charge);
    }

    printRow("TOTAL", totalHours, totalCharges);
}