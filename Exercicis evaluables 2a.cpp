#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n{ 0 };
    cout << "Introdueix un enter no negatiu: ";
    cin >> n;

    
    while (n < 0) {
        cout << "El nombre ha de ser no negatiu. Torna-ho a provar: ";
        cin >> n;
    }

    vector<int> digits{ 1 }; 
    int counter{ 2 };        

    while (counter <= n) {
        int carry{ 0 }; 

       
        while (i < digits.size()) {
            int product{ digits[i] * counter + carry };
            digits[i] = product % 10; 
            carry = product / 10;    
            ++i;
        }

        
        while (carry > 0) {
            digits.push_back(carry % 10);
            carry /= 10;
        }

        ++counter;
    }

    cout << n << "! = ";
    int pos{ static_cast<int>(digits.size()) - 1 };
    while (pos >= 0) {
        cout << digits[pos];
        --pos;
    }
    cout << "\n";
}
