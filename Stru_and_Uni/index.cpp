#include <iostream>
#include <string>
using namespace std;

//Defining a structure 
// struct  student {
//     //Data members
//     int age;
//     string name;
//     int enroll_no;

//     //member function
//     void printHello() {
//         cout << "Hello Abhinav" << endl;
//     };
// };

// int main() {
//     student s1;
//     s1.name = "Abhinav Tomar";
//     s1.age = 15;
//     s1.enroll_no = 2215;
//     s1.printHello(); 
//     return 0;
// }

//Definig a union
union student {
    //Data member
    int age;
    int enroll_no;
};

int main() {
    student s1;
    //Here the value is overwrite so age as now 2215 value instead of 19
    s1.age = 19;
    s1.enroll_no = 2215;
    cout << s1.age << endl;
    return 0;

}