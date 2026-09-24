#include <iostream>
using namespace std;

// Friend class Concept
//  class Abhi {
//      int x = 10;

//     friend class Rahul;
// };

// class Rahul {
//     public:
//     void show(Abhi obj){
//         //Access the member of abhi class using friend class
//         cout << obj.x << endl;
//     };
// };

// int main() {
//     Abhi a;
//     Rahul r;
//     r.show(a);
//     return 0;
// }


//Friend Function
class Student
{
private:
    int marks = 50;

public:
    friend void marks(Student obj);
};

void marks(Student obj){
    cout << "Hi i am freind function of Student class..." << endl;
    cout << obj.marks << endl;
};

int main(){
    Student s1;
    marks(s1);
    return 0;
}

// Without Friend Function concept
// class Student {
//     private:
//     int marks = 30;

//     public:
//     void getMarks() {
//         cout << "Marks is: " << marks << endl;
//     };
// };

// int main () {
//     Student s1;
//     s1.getMarks();
//     return 0;
// }
