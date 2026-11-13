#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int flip() {
    return rand() % 2;
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    int heads{ 0 };
    int tails{ 0 };

    for (int toss{ 1 }; toss <= 100; ++toss) {
        if (flip() == 1) {
            cout << "Heads ";
            ++heads;
        }
        else {
            cout << "Tails ";
            ++tails;
        }

        if (toss % 10 == 0) {
            cout << "\n";
        }
    }

    cout << "\nHeads (cara): " << heads << "\n";
    cout << "Tails (creu): " << tails << "\n";
}
