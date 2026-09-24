#include <iostream>
#include <string>
using namespace std;


class Student {
    public:
    //Data Member / Properties
    string name;
    int age;
    string dept;

    //Constructor
    Student(string name,int age,string dept){
        this->name = name;
        this->age = age;
        this->dept = dept;
    }

    //Member function
    void changeDept(string newdept){
        dept = newdept;
    };
};

int main() {
    Student s1("Abhinav Tomar",19,"Computer Science");
    Student s2("Rahul Chaudhary",21,"Electrical Engineering");
    cout << s1.name << endl;
    cout << s2.name << endl;
    // s1.name = "Abhinav Tomar";
    // s1.age = 19;
    // s1.dept = "Computer Science";
    // cout << "Name is : " << s1.name << endl;
    // cout << s1.dept << endl;
    // s1.changeDept("Electrical Engineering");
    // cout << s1.dept << endl;
    return 0;

}