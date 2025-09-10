#include <iostream>

using namespace std;

int main() {
    double x = 984.2536432;
    cout << x << endl;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << x << endl;

    return 0;
}