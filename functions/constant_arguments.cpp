#include <iostream>
using namespace std;

// Function with a constant argument
void display(const string &name) {
    // name = "Someone"; // ❌ This would cause a compile-time error
    cout << "Name: " << name << endl;
}

int main() {
    string myName = "Urja";
    display(myName);
    return 0;
}
