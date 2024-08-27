#include<iostream>
#include<string>

using namespace std;

class Student {
    public:
        int marks;
        string name;
        
        Student(int m, string n) {
            this->marks = m;
            this->name = n;
        }

        Student() {
            this->marks = 0;
            this->name = "";
        }

        // Functor class for comparison
        class StudentComparator {
            public:
                bool operator()(Student a, Student b) {
                    return a.marks < b.marks;
                }
        };
};

int main() {
    Student s1;
    Student s2;
    s1.marks = 93;
    s1.name = "babbar";

    s2.marks = 94;
    s2.name = "lakshay";

    Student::StudentComparator cmp;
    if (cmp(s1, s2)) {
        cout << "babbar's marks are less than lakshay's marks";
    } else {
        cout << "lakshay's marks are less than babbar's marks";
    }

    return 0;
}

