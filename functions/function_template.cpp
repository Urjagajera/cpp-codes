// function_template.cpp
// Demonstrates function templates in C++

#include <iostream>
using namespace std;

// Template function to find the maximum of two values
template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Using getMax with integers
    cout << "Max of 10 and 20: " << getMax(10, 20) << endl;

    // Using getMax with floats
    cout << "Max of 5.5 and 2.2: " << getMax(5.5, 2.2) << endl;

    // Using getMax with characters
    cout << "Max of 'a' and 'z': " << getMax('a', 'z') << endl;

    return 0;
}
