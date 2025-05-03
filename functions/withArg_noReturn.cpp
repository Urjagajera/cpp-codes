#include<iostream>
using namespace std;

                                  // A function that takes arguments but does not return any value
void displaySum(int a, int b)
{
    int sum = a + b;
    cout << "The sum of " << a << " and " << b << " is: " << sum << endl;
}

int main() {
    int x = 10, y = 15;

    displaySum(x, y);          // Calling the function with arguments
    return 0;
}

