#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    string reverse; //hold the reversed input string

    cout << "Enter a word: ";
    cin >> input;

    for (int i = input.length()-1; i >= 0; i--) {
        reverse = reverse + input [i];
        cout << "reverse string is currently: " << reverse << endl;
    }

    //check if the reverse is the same as the original input
    if (reverse == input) {
        cout << input << " is a palidrome!" << endl;
    } else {
        cout << input << " is not a palindrome!" << endl;
    }
        return 0;
    }