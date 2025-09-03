#include <iostream>

using namespace std;

int main() {

    float x1;
    float y1;
    float x2;
    float y2;
    float x3;
    float y3;

//get first point
    cout << "Enter x1 y1: ";
    cin >> x1 >> y1;

//get second point
    cout << "Enter x2 y2: ";
    cin >> x2 >> y2;

    cout << "x1: " << x1 << endl;
    cout << "y1: " << y1 << endl;

    cout << "x2: " << x2 << endl;
    cout << "y2: " << y2 << endl;

//calculate result
    x3 = (x2 + x1) / 2;
    y3 = (y2 + y1) / 2;

//print it out
    cout << "Result: (" << x3 << "," << y3 << ")" << endl;
    return 0;
}