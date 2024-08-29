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

    // Constructor (or we can say constructor)
    Student() {
        cout << "Student's default constructor" << endl; 
    }

    // Parameterized constructor
    Student(int id, int age, string name, int nos) {
        cout << "Student's parameterized constructor" << endl;
        this->id = id; 
        this->age = age; 
        this->name = name; 
        this->nos = nos; 
    }

    // copy constructor
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
        cout << "Student's destructor" << endl; 
    }
};

int main() {

    // copy constructor


    //parametrised constructor

    Student A(1, 15, "Divyanshu", 6);

//     Student B(2, 18, "Gaurav", 6);
//     Student C(3, 17, "Akshit", 6);

// cout << A.name << endl;
// cout << B.name << endl;
    // Using methods of the Student class
    // A.bunk();
    // B.sleep();



//default constructor

    // Student A;
    // A.id= 1;
    // A.age=15;
    // A.name="Divyanshu ";
    // A.nos = 7;
    // A.study();
    
    // Student B;
    // B.id= 1;
    // B.age=15;
    // B.name="adarsh ";
    // B.nos = 7;

    // B.bunk();

    //copy constructor
    

    //is mai stack mai store hota hai sb kuch

        // Student C = A;
        // Student C(A);//anotehr way to copy the valurs using the copy constructor
        // //all these valeius are being stored int the stack and to store it into dynamically we use pointers
        // cout << C.name<< " " << A.name<< endl;


 // Using the pointer
 //dynamic memory location
    Student *A = new Student(1, 14, "Babbar", 7);
    cout << A->name << endl;
    cout << A->age << endl;
    A->study();

    // Deallocate memory
    delete A;
    return 0;
}