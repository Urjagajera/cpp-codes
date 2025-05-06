#include<iostream>
using namespace std;

// Recursive function to calculate factorial of a number
int factorial(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1); // Recursive call
}

int main() {
    int number = 5;
    cout << "Factorial of " << number << " is: " << factorial(number) << endl;
    return 0;
}
