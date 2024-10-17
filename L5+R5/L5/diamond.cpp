// diamond star

#include <iostream>
using namespace std;

int main() {
    int i, j, n;
    cin >> n;

    // Upper part of the diamond
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the diamond
    for (i = n - 1; i >= 1; i--) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
