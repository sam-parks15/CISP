#include <iostream>

using namespace std;

int main () {
    char choice;

    cout << "Pick a direction (N, S, E, W): ";
    cin >> choice;

    //Convert user input to uppercase
    choice = toupper(choice);

    switch(choice) {
        case 'N':
            cout << "You arrive in a polar region blanketed with snow." << endl;
            cout << "Make a huge snowman." << endl;
            break;
        case 'S':
            cout << "You are attacked by a mob of kangaroos." << endl;
            break;
        case 'E':
            cout << "You take a dip in the ocean with a hippocampus!" << endl;
            break;
        case 'W':
            cout << "You melt into a puddle in California." << endl;
            break;
    }

    return 0;
}