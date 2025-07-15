#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class - Student
class Student : public Person {
private:
    string course;

public:
    void setStudentDetails(string n, int a, string c) {
        setPersonDetails(n, a);  // Reuse base class method
        course = c;
    }

    void displayStudentDetails() {
        cout << "\n--- Student Details ---" << endl;
        displayPersonDetails();  // Reuse base class method
        cout << "Course: " << course << endl;
    }
};

// Derived class - Teacher
class Teacher : public Person {
private:
    string subject;

public:
    void setTeacherDetails(string n, int a, string s) {
        setPersonDetails(n, a);  // Reuse base class method
        subject = s;
    }

    void displayTeacherDetails() {
        cout << "\n--- Teacher Details ---" << endl;
        displayPersonDetails();  // Reuse base class method
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student s;
    Teacher t;

    // Set and display student details
    s.setStudentDetails("Khushi", 20, "Computer Science");
    s.displayStudentDetails();

    // Set and display teacher details
    t.setTeacherDetails("Mr. Sharma", 45, "Mathematics");
    t.displayTeacherDetails();

    return 0;
}