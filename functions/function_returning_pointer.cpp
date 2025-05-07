#include <iostream>
using namespace std;

// Function that returns a pointer to an integer
int* findMax(int* a, int* b) {
    // Returns pointer to the larger of two integers
    if (*a > *b)
        return a;
    else
        return b;
}

int main() {
    int num1 = 10, num2 = 25;

    // Call function and store returned pointer
    int* maxPtr = findMax(&num1, &num2);

    cout << "The greater number is: " << *maxPtr << endl;  // Dereferencing pointer to show value

    return 0;
}
