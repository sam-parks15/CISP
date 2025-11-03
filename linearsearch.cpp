#include <iostream>

using namespace std;

// function prototype
int linearsearch(int a[], int k);

int main() {
    // Declare the array
    // Initialize it
    int list[6] = {2,4,6,8,10,12};

    if (linearsearch (list,8) == -1) {
        cout << "The key was not found in the array." << endl;
    } else {
        cout << "The key was found at index " << linearsearch (list,8) << endl;
    }

    cout << "The minimum value in the list is: " << "at index: " << ;
    return 0;
}

// get the minimum value in the list
int minValue = minValue(list);
cout << "The minimum value in the list is: " << minVal << endl;

return 0;

// uses linear search algorithm to search for element k inside of array a
int linearsearch (int a[], int k) {
    for (int i = 0; i <= 5; i++) {
        if (a[i] == k) {
            return i;
        }
    }
    // if we get to this point, we know
    // k is not in the array
    return -1;
}