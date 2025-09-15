#include <iostream>
#include <math.h>

using namespace std;
int main() {
    double miles;
    double gallons;
    double mpg;

    //Prompt user for miles
    cout << "Enter miles: ";
    //Read miles
    cin >> miles;

    //if miles < 0 
    if(miles < 0) {
        //Print error message
        cout << "Miles should be greater than 0. Go outside" << endl;
    } else {

        //Prompt the user for gallons
        cout << "Enter gallons: ";
        //Read gallons
        cin >> gallons;
        //if gallons <= 0 
        if(gallons <= 0) {
            //Print error message
            cout << "Gallons should be greater than 0. Get me a coffee." << endl;
         } else {
            //mpg = miles per gallon
            mpg = miles/gallons;
            //Print mpg
            cout << "Miles per gallon: " << mpg << endl;
         }
        }

        return 0;
    }
