#include <iostream>
#include <string>
using namespace std;

//Example of Complie time Polymorphism
// Constructor OVerloading
class Student {
    public:
    string name;
    Student() {
        cout << "Non-parameterized Constructor";
    };

    Student(string name) {
        this->name = name;
        cout << "Paramerterized Constructor";
    };
};

int main () {
    Student s1("Abhinav Tomar");
    return 0;
}

//Function Overloading 
class Print {
    public:
    void show(int x){
        cout << "int: " << x << endl;
    };

    void show(char ch) {
        cout << "char: " << ch << endl;
    };
};

int main () {
    Print p1;
    p1.show('A');
    return 0;
}


//Examples of run time polymorphism
//Function Overrding
//Base class
class Hello {
    public:
    void print(){
        cout << "Hello i am in parent class" << endl;
    };
    //Virtual Function
    virtual void getInfo() {
        cout << "Hi i am from parent class" << endl;
    };
};
//Derived class
class Hello2 : public Hello {
    public:
    void print() {
        cout << "Hi i am in child class" << endl;
    };

    void getInfo() {
        cout << "Hi i am from child class" << endl;
    };
};

int main() {
    Hello2 h2;
    h2.print();
    h2.getInfo();
    return 0;
}