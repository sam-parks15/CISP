#include <iostream>

using namespace std;

int main() {
    double salary;
    double hours;
    double rate = 7.50;

    cout << "How many hours did you work? ";
    cin >> hours;
    
    cout.precision(2); //set # of digits after decimal to 2
    cout.setf(ios::fixed); // don't display in scientific notation
    if(hours <= 40) {
        salary = rate * hours;
    } else {
        salary = 40 * rate + (hours - 40) * rate * 1.5;
    }

    cout << "Your calculated salary: " << "$" << salary << endl;

    return 0;
    }