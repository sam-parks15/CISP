#include <iostream>
#include <string>

using namespace std;


bool isvowel (char c);

int  main () {
    string w1;
    string w2;
    string fullname;

    cout << "Enter a first name: ";
    cin >> w1;

    cout << "Enter another last name: ";
    cin >> w2;

    fullname = w1 + " " + w2;

    cout << "Full name: " << fullname << endl;

    for (int i=0; i < w1.length(); i++) {
        cout << w1[i] << endl;
    }

    //check if w2 contains any digits
    for (int i = 0; i < w2.length(); i++) {
        if (isdigit(w2[i])) {
            cout << w2[i] << " is a digit." << endl;
        }
    }

    string new_w1 = ""; //initialize an empty string

    //construct a new string by replacing all vowels with z in w1
    for (int i = 0; i < w1.length(); i++) {
        if (isvowel(w1[i])) {
            new_w1 = new_w1 + 'z';
        } else {
            new_w1 = new_w1 + w1[1];
        }
    }

    cout << "New w1: " << new_w1 << endl;

    return 0;
}

bool isvowel(char c) {
    if(c == 'a' || c == 'e' || c == '1' || c == 'o' || c == 'u') {
        return true;
    }
        return false;
}