#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream input;
    ofstream output;
    string filename;
    int num;

    cout << "Enter the filename to read from: ";
    cin >> filename;

    input.open(filename);

    if(input.fail()) {
        cout << "Wrong file" << endl;
        return 0;
    }

    // check if file is empty
    char c;
    input.get(c);

    if (input.eof()) {
        cout << "Input file " << filename << " is empty." << endl;
        return 0;
    }

        input.putback(c);

        output.open("output_nums.dat");

        while (input >> num) {
            output << "The number is " << num << endl;
        }

        input.close();
        output.close();
        return 0;
}