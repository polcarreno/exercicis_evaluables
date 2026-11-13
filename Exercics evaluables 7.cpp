#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x{ 0.0 };

	cout << fixed;
	cout.precision(1);

	x = fabs(7.5);                      cout << "a) x = " << x << "\n";
	x = floor(7.5);                     cout << "b) x = " << x << "\n";
	x = fabs(0.0);                      cout << "c) x = " << x << "\n";
	x = ceil(0.0);                      cout << "d) x = " << x << "\n";
	x = fabs(-6.4);                     cout << "e) x = " << x << "\n";
	x = ceil(-6.4);                     cout << "f) x = " << x << "\n";
	x = ceil(-fabs(-8 + floor(-5.5)));  cout << "g) x = " << x << "\n";
}