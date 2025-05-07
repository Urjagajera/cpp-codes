#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    // Constructor to initialize length
    Box() {
        length = 0;
    }

    // Friend function declaration
    friend void setLength(Box &b, int len);
};

// Friend function definition
// Can access private members of the class
void setLength(Box &b, int len) {
    b.length = len;
    cout << "Length is set to: " << b.length << endl;
}

int main() {
    Box b;
    setLength(b, 10); // Friend function can access and modify private data
    return 0;
}
