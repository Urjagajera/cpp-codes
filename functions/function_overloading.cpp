#include<iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Overloaded function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Overloaded function to add two doubles
double add(double a, double b) {
    return a + b;
}

int main() {
    cout << "Sum of 2 and 3: " << add(2, 3) << endl;
    cout << "Sum of 2, 3 and 4: " << add(2, 3, 4) << endl;
    cout << "Sum of 2.5 and 3.7: " << add(2.5, 3.7) << endl
    return 0;
}
