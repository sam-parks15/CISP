#include <iostream>

using namespace std;

int main() {
    bool valid = false;
    char choice;

do {
    cout << "Enter a letter (A,B,C,D): ";
    cin >> choice;

    if (choice == 'A' || choice == 'B' || choice == 'C' || choice == 'D') {
        valid = true;

    } else {
        cout << "Try again." << endl;
    }
} while (!valid);
    return 0;
}