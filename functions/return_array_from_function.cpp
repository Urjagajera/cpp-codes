#include <iostream>
using namespace std;

// Function that returns pointer to an array
int* createArray() {
    static int arr[5]; // Static to preserve array after function ends
    cout << "Enter 5 values to store in array: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    return arr; // Returning pointer to array
}

int main() {
    int* ptr;

    // Get array from function
    ptr = createArray();

    cout << "Values returned from function: ";
    for (int i = 0; i < 5; i++) {
        cout << ptr[i] << " ";
    }

    return 0;
}
