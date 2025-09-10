#include <iostream>
#include <string>
using namespace std;

int main() {
    double temp;
    cout << "Enter the temperature: ";
    cin >> temp;

    cout << "temp: " << temp << endl;

    if(temp < 40) {
        cout << "It's a wraith!" << endl;
    } else if(temp == 60) {
        cout << "It's a hantu" << endl;
    } else if (temp > 72) {
        cout << "It's a ghoul" << endl;
    }
    
    
    return 0;
}