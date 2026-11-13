#include <iostream>
using namespace std;

int main() {
    const int accuracy{ 200000 };

    cout << "Accuracy set at: " << accuracy << "\n\n";
    cout << left;
    cout.width(10);
    cout << "term";
    cout << "pi\n";

    cout << fixed;
    cout.precision(8);

    double pi{ 0.0 };
    double denominator{ 1.0 };
    int sign{ 1 };
    int firstTerm{ 0 };
    for (int term{ 1 }; term <= accuracy; ++term) {
        pi += sign * 4.0 / denominator;

        cout.width(10);
        cout << term;
        cout << pi << "\n";


        if (firstTerm == 0 && pi >= 3.14159 && pi < 3.14160) {
            firstTerm = term;
        }

        denominator += 2;
        sign = -sign;
    }

    cout << "\nEl primer valor que comenca per 3.14159 s'obte amb "
        << firstTerm << " termes.\n";
}