#include<iostream>
using namespace std;

// Function that takes arguments and returns their product
int multiply(int a, int b) {
    return a * b;
}

int main() {
    int x = 6, y = 7;
    int result = multiply(x, y); // Call the function and store the result
    cout << "The product of " << x << " and " << y << " is: " << result << endl;
    return 0;
}
