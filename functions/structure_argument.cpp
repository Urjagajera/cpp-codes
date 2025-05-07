#include <iostream>
using namespace std;

// Define a structure to represent a student
struct Student {
    int roll;
    string name;
    float marks;
};

// Function that takes a structure as argument
void displayStudent(Student s) {
    cout << "Student Details:" << endl;
    cout << "Roll Number: " << s.roll << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
}

int main() {
    // Create and initialize a Student structure
    Student stu;
    stu.roll = 101;
    stu.name = "Urja";
    stu.marks = 95.5;

    // Pass structure to the function
    displayStudent(stu);

    return 0;
}
