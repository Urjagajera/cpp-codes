#include<iostream>  
using namespace std;

// Function to add two integers and return the result
int add(int a, int b) {
    return a + b;
}

int main() {
    int x, y ; // Declare and initialize two integers as zero
    // user inputs of numbers x and y
    cout << "enter num1 :" ;
    cin >> x;
    cout << "enter num2 :" ;
    cin >> y;
  
    // Call the add function and display the result
    cout << endl << "Sum is: " << add(x, y) << endl;

    return 0; 
}
