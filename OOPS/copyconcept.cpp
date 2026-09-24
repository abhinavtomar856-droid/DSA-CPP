#include <iostream>
using namespace std;

class Student {
public:
    string name;
    double* cgpaPtr;

    //Constructor
    Student(string name, double cgpa) {
        this->name = name;
        cgpaPtr = new double;
        *(cgpaPtr) = cgpa;
    };

    //Copy Constructor
    Student(Student &obj){
        this->name = name;
        cgpaPtr = new double;
        *(cgpaPtr) = *obj.cgpaPtr;
    };

    ~Student() {
        cout << "Hi i am destructor" << endl;
    };

    void getInfo() {
        cout << "name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    };
};

int main()
{
    Student s1("Abhinav Tomar",9);
    s1.getInfo();
    return 0;
}