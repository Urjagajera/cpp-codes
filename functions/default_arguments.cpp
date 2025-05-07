#include <iostream>
using namespace std;

// Function with default arguments
// b and c have default values if not provided by the caller
int add(int a, int b = 5, int c = 10) {
    return a + b + c;
}

int main() {
    cout << "Calling add(3): " << add(3) << endl;        // Uses default b=5, c=10 → 3+5+10 = 18
    cout << "Calling add(3, 4): " << add(3, 4) << endl;  // Uses default c=10 → 3+4+10 = 17
    cout << "Calling add(3, 4, 2): " << add(3, 4, 2) << endl; // No default used → 3+4+2 = 9

    return 0;
}
