#include <iostream>
#include <cstdlib> 
#include <ctime>  
using namespace std;

int main() {

	srand(static_cast<unsigned int>(time(nullptr)));

	int n{ 0 };

	cout << "a) [1, 2]:       ";
	for (int i{ 0 }; i < 5; ++i) { n = 1 + rand() % 2; cout << n << " "; }

	cout << "\nb) [1, 100]:     ";
	for (int i{ 0 }; i < 5; ++i) { n = 1 + rand() % 100; cout << n << " "; }

	cout << "\nc) [0, 9]:       ";
	for (int i{ 0 }; i < 5; ++i) { n = rand() % 10; cout << n << " "; }

	cout << "\nd) [1000, 1112]: ";
	for (int i{ 0 }; i < 5; ++i) { n = 1000 + rand() % 113; cout << n << " "; }

	cout << "\ne) [-1, 1]:      ";
	for (int i{ 0 }; i < 5; ++i) { n = -1 + rand() % 3; cout << n << " "; }

	cout << "\nf) [-3, 11]:     ";
	for (int i{ 0 }; i < 5; ++i) { n = -3 + rand() % 15; cout << n << " "; }

	cout << "\n";
}
