#include <iostream>

using namespace std;

// function prototype
void printGrades (double a[][NUM_TESTS]);

int main () {
    const int MAX_STUDENTS = 5;
    const int NUM_TESTS = 3;

    // Declare array
    double grades[MAX_STUDENTS][NUM_TESTS] = {
        {89.3,98.9,67.4};
        {45.8,67.8,88.8};
        {77.5,82.0,91.2};
        {60.0,73.5,85.0};
        {100.0,100.0,100.0};
    }

// One way to initialize 2D array values
// grades[0][0] = 89.3;
// grades[0][1] = 98.9;
// grades[0][2] = 67.5;

    // Print each grade
    printGrades(grades);

    return 0;
}

void printGrades(double a[][NUM_TESTS]) {
    // loop over each row
    for (int j = 0; j < MAX_STUDENTS;j++) {
        // loop over each column
        cout << "Grades for student " << j + 1 << ":";
        for (int i = 0; i < NUM_TESTS;i++) {
            cout << a[j][i] << endl;
        }
        cout << endl;
    }
}