#include <iostream>
#include <string>
using namespace std;

//Single Inheritance
// Parent class or base class
class Person {
    public:
    //Constructor
    Person() {
        cout << "Parent class constructor called.." << endl;
    };

    string name;
    int age;
    Person(string name , int age) {
        this->name = name;
        this->age = age;
    };

    //Destructor
    // ~Person() {
    //     cout << "Parent class destructor.." << endl;
    // };
};

//Child class or derived classs
class Student : public Person {
    public:
    //Constructor
    Student() {
        cout << "Base class constructor called..." << endl;
    };

    int rollNo;
    Student(string name , int age , int rollNo) : Person(name , age){
        this->name = name;
        this->age = age;
        this->rollNo = rollNo;
    };
    //Destructor
    // ~Student() {
    //     cout << "Base class destructor.." << endl;
    // };
    
    void getInfo() {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "rollNo : " << rollNo << endl;
    };
};


int main() {
    Student s1;
    s1.name = "Abhinav Tomar";
    s1.age = 19;
    s1.rollNo = 2215;
    s1.getInfo();
    return 0;
}

//Multi level Inheritance Concept
// class Person {
//     public:
//     string name;
//     int age;
// };

// //Child class or derived classs
// class Student : public Person {
//     public:
//     int rollNo;
// };

// class GraduStudent : public Student {
//     public:
//     string subject;
// };

// int main() {
//     GraduStudent s1;
//     s1.name = "Abhinav Tomar";
//     s1.subject = "Computer Science";
//     s1.age = 19;
//     cout << s1.name << endl;
//     cout << s1.age << endl;
//     cout << s1.subject << endl;
//     return 0;
// }


//Multiple Inheritance
// class Student {
//     public:
//     string name;
//     int age;
// };

// //Child class or derived classs
// class Teacher {
//     public:
//     string subject;
//     double salary;
// };

// class TA : public Student, public Teacher {

// };

// int main() {
//     TA t1;
//     t1.name = "Abhinav Tomar";
//     t1.salary = 40000;
//     cout << t1.name << endl;
//     cout << t1.salary << endl;
//     return 0;
// }

//Hierarchial Inheritance
// class Person {
//     public:
//     string name;
//     int age;
// };

// class Student : public Person {
//     public:
//     string subject;
// };

// class Teacher : public Person {
//     public:
//     double salary;
// };

// int main () {
//     Student s1;
//     Teacher t1;
//     s1.name = "Abhinav";
//     t1.name = "Shardha Khapara";
//     cout << t1.name << endl;
//     cout << s1.name << endl;
//     return 0;
// }

//Hybrid Inheritance is the mix of all inhertiance