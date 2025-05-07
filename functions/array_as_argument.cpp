#include <iostream>
using namespace std;

// Function that takes an array and its size as arguments
void displayArray(int arr[], int size) {
    cout << "Array elements are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Declare and initialize an array
    int numbers[] = {5, 10, 15, 20, 25};

    // Calculate size of the array
    int length = sizeof(numbers) / sizeof(numbers[0]);

    // Call function and pass array with its size
    displayArray(numbers, length);

    return 0;
}
