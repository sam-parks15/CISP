#include <iostream>

using namespace std;

// Define cat struct type
struct Cat
{
    string name;
    int age;
    bool isFixed;
};

void printCat(Cat c);

int main () {
    Cat myCat;
    Cat yourCat = {"Francisco Jose", 8, true};

    myCat.name = "Gonzo";
    myCat.age = 11;
    myCat.isFixed = true;

    printCat(myCat)
    printCat(yourCat)

    cout << "my cat: " << endl;
    cout << "Name: " << myCat.name << endl;
    cout << "Age: " << myCat.age << endl;
    cout << "Is fixed: ";
if (yourCat.isFixed) {
    cout << "Yes" << endl;
} else {
    cout << "No" << endl;
}

    return 0;
}

void printCat(Cat c);
    cout << "Name: " << c.name << endl;
    cout << "Age: " << c.age << endl;
    cout << "Is fixed: ";
if (c.isFixed) {
    cout << "Yes" << endl;
} else {
    cout << "No" << endl;
}