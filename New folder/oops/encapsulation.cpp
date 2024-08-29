#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    // Attributes
    int id;
    int age;
    string name;
    int nos;
private:
    float *gpa;
    string gf;

public:
    void setgpa(float a) {
        // Layer of authentication
        *this->gpa = a;
    }
    float getgpa() const {
        return *gpa;
    }
    float getage() const {
        return this->age;
    }

    // Constructor (or we can say constructor)
    Student() {
        cout << "Student's default constructor" << endl;
    }

    // Parameterized constructor
    Student(int id, int age, string name, int nos, float gpa, string gf) {
        cout << "Student's parameterized constructor" << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->gpa = new float(gpa); // Corrected initialization
        this->gf = gf;
    }

    // Copy constructor
    Student(const Student &srcobj) {
        cout << "Student's copy constructor" << endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
    }

    // Behavior / methods / functions
    void study() {
        cout << name << " is studying" << endl;
    }

    void sleep() {
        cout << name << " is sleeping" << endl;
    }

    void bunk() {
        cout << name << " is bunking" << endl;
    }

    // Destructor
    ~Student() {
        delete gpa; // Don't forget to deallocate memory
        cout << "Student's destructor" << endl;
    }

private:
    void gfchatting() {
        cout << this->name << " is chatting with gf" << endl;
    }
};

int main() {
    Student A(1, 12, "ranu", 5, 6.6, "rani");
    cout << "Initial GPA: " << A.getgpa() << endl;
    A.setgpa(6.7);
    cout << "Updated GPA: " << A.getgpa() << endl;
    cout << "Age: " << A.getage() << endl;

    return 0;
}
