#include <iostream>
using namespace std;

// Define a structure to hold a complex number
struct Complex {
    float real;
    float imag;
};

// Function that returns a structure
Complex addComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;  // Returning a structure
}

int main() {
    Complex num1, num2, sum;

    // Taking input for first complex number
    cout << "Enter real and imaginary part of first complex number: ";
    cin >> num1.real >> num1.imag;

    // Taking input for second complex number
    cout << "Enter real and imaginary part of second complex number: ";
    cin >> num2.real >> num2.imag;

    // Calling the function that returns a structure
    sum = addComplex(num1, num2);

    // Displaying result
    cout << "Sum = " << sum.real << " + " << sum.imag << "i" << endl;

    return 0;
}
