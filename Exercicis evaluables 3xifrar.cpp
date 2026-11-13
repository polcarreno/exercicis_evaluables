#include <iostream>
using namespace std;

int main() {
    int number{ 0 };
    cout << "Introdueix un enter de 4 xifres (0000-9999): ";
    cin >> number;

    while (number < 0 || number > 9999) {
        cout << "Ha de tenir 4 xifres. Torna-ho a provar: ";
        cin >> number;
    }


    int d1{ number / 1000 };
    int d2{ (number / 100) % 10 };
    int d3{ (number / 10) % 10 };
    int d4{ number % 10 };

    d1 = (d1 + 7) % 10;
    d2 = (d2 + 7) % 10;
    d3 = (d3 + 7) % 10;
    d4 = (d4 + 7) % 10;


    cout << "Enter xifrat: " << d3 << d4 << d1 << d2 << "\n";
}