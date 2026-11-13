#include <iostream>
using namespace std;

int reverseDigits(int number) {
    int reversed{ 0 };

    while (number != 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }

    return reversed;
}

int main() {
    int number{ 0 };
    cout << "Introdueix un enter: ";
    cin >> number;

    cout << "Xifres invertides: " << reverseDigits(number) << "\n";
}