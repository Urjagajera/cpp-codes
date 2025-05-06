#include<iostream>
using namespace std;

// Function that takes no arguments but returns an integer
int getNumber() {
    int num = 42;
    return num;
}

int main() {
    int result = getNumber(); // Store the returned value
    cout << "Returned number is: " << result << endl;
    return 0;
}
