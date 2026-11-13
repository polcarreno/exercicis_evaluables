// RESPOSTA: dibuixa un rectangle de 10 files per 5 columnes fet amb '@'.
//   - El for extern (i de 1 a 10) s'executa 10 vegades -> 10 files.
//   - El for intern (j de 1 a 5) escriu 5 '@' a cada fila.
//   - Després del for intern, '\n' fa el salt de línia.
//
// Sortida:
// @@@@@
// @@@@@
// @@@@@
// @@@@@
// @@@@@
// @@@@@
// @@@@@
// @@@@@
// @@@@@
// @@@@@
#include <iostream>
using namespace std;

int main() {
    for (int i{ 1 }; i <= 10; i++) {
        for (int j{ 1 }; j <= 5; j++) {
            cout << '@';
        }

        cout << '\n';
    }
}