#include <iostream>
#include <string>

using namespace std;

int main() {
    float x;
    float y;
    int sum;
    int difference;
    int product;
    float quotient;

    cout << "Make a Calculator Program" << endl;

    cout << "Enter your first number: ";
    cin >> x;

    cout << "Enter your second number: ";
    cin >> y;

    sum = x + y;
    difference = x - y;
    product = x * y;
    quotient = x / y;

    cout << "Result of addition: " << sum << endl;
    cout << "Result of subtraction: " << difference << endl;
    cout << "Result of multiplication: " << product << endl;
    cout << "Result of division: " << quotient << endl;

    return 0;
}