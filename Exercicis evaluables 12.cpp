#include <iostream>
using namespace std;


void hanoi(int disks, int from, int to, int temp) {
    if (disks == 1) {
        cout << from << " -> " << to << "\n";
        return;
    }

    hanoi(disks - 1, from, temp, to);
    cout << from << " -> " << to << "\n";
    hanoi(disks - 1, temp, to, from);
}

int main() {
    int disks{ 0 };
    cout << "Quants discos vols moure? ";
    cin >> disks;

    while (disks < 1) {
        cout << "Com a minim 1 disc. Torna-ho a provar: ";
        cin >> disks;
    }

    cout << "Moviments per passar " << disks
        << " discos de la vareta 1 a la vareta 3:\n";
    hanoi(disks, 1, 3, 2);
}

