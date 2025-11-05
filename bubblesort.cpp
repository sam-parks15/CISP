#include <iostream>

using namespace std;

void printArray (int l[], int n);
void bubbleSort (int l[], int n);

int main() {
    const int LIST_LENGTH = 5;
    int list[LIST_LENGTH] = {5,9,2,10,0};
    int temp;
    bool swapped;
    int anotherList[3] = {-1,40,22};

    cout << "Unsorted list: " << endl;
    printArray (list, LIST_LENGTH);
    cout << endl;
    cout << "Unsorted anotherList: " << endl;
    printArray (anotherList,3);
    cout << endl;

    printArray (anotherList, 3);

    bubbleSort (list, LIST_LENGTH);
    bubbleSort (anotherList, 3);

    // bubble sort in ascending order
    do {
        swapped = false;
        for (int i = 0; i < 5; i++) {
            if (list[i] > list[i+1]) {

            // swap element's position
            temp = list[i+1];
            list[i+1] = list[i];
            list[i] = temp;
            swapped = true;
            }
        }

    } while (swapped);

    cout << "Sorted list: "

    for (int i = 0; i < LIST_LENGTH; i++) {
        cout << list [i] << " ";
    }

    return 0;

    // print an array
    // l is the array to print
    // n is the number of elements in an array
    void printArray (int l[], int n) {
        for (int i = 0; i < n; i++) {
            cout << list [i] << " ";
        }
    }
}