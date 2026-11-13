#include <iostream>
using namespace std;

int main() {
    int number{ 0 };
    cout << "Introdueix l'enter xifrat de 4 xifres (0000-9999): ";
    cin >> number;

    while (number < 0 || number > 9999) {
        cout << "Ha de tenir 4 xifres. Torna-ho a provar: ";
        cin >> number;
    }

    int d1{ number / 1000 };
    int d2{ (number / 100) % 10 };
    int d3{ (number / 10) % 10 };
    int d4{ number % 10 };


    int o1{ d3 };
    int o2{ d4 };
    int o3{ d1 };
    int o4{ d2 };


    o1 = (o1 + 3) % 10;
    o2 = (o2 + 3) % 10;
    o3 = (o3 + 3) % 10;
    o4 = (o4 + 3) % 10;


    cout << "Enter original: " << o1 << o2 << o3 << o4 << "\n";
}

