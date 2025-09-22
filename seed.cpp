#include <iostream>
#include <ctime>

using namespace std;

int main() {
    double roll;
    char choice;
    double chance;
    int counter;

    srand(time(0)); //seeding the random number generator
    cout << "Roll the die? (Y/N): ";
    cin >>  choice;

    while (choice != 'N') {
        chance = (double)rand()/RAND_MAX;
        if (chance <= 10) {
            cout << "You've hit pity" << endl;
            if(chance <= 0.12) {
                roll = 20;
        } else if (chance <= 0.06) {
            cout << "6% chance of 20." << endl;
            roll = 20;
        } else {
            cout << "regular roll between 1-19" << endl;
            roll = 1 + rand() % 19;
        }
        }
        counter++;
        cout << "Number of times rolled: " << counter << endl;
        cout << "Roll: " << roll << endl;
        roll = 1 + rand() % (20);
        cout << roll << endl;

        cout << "Roll the die (N to quit): ";
        cin >> choice;
    }

    cout << "Goodbye!" << endl;

    return 0;
}