#include <iostream>

using namespace std;

int main () {
    int n;
    int i;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    for (int i = n; i >= 1; --i) {
        cout << i << endl;
    }
        cout << "Blastoff!" << endl;

        return 0;
}