#include <iostream>
using namespace std;

// Function that returns a pointer to an array
int* createArray(int size) {
    // Dynamically allocate memory for an array
    int* arr = new int[size];

    // Fill the array with sample values (multiples of 10)
    for (int i = 0; i < size; i++) {
        arr[i] = (i + 1) * 10;
    }

    return arr; // Return the pointer to the array
}

int main() {
    int size = 5;

    // Get the array returned from the function
    int* myArray = createArray(size);

    // Display the array elements
    cout << "Returned array elements: ";
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    // Free the dynamically allocated memory
    delete[] myArray;

    return 0;
}
