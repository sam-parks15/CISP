#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "hi" << setw(10) << "Sam " << "hello";
    cout << setfill('_') << setw(10) << "Sam" << endl;
    cout << setfill (' ');

    cout << left << setw(10) << "Left" << "|" << endl;
    cout << right << setw(10) << "Right" << "|" << endl;
    return 0;
}