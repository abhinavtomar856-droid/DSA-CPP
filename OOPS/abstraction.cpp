#include <iostream>
using namespace std;

//Abstraction
//Abstract class concept
class Shape {
    virtual void draw () = 0;
};

class Circle : public Shape {
    public:
    void draw () {
        cout << "Circle draw" << endl;
    };
};

class Rectangle : public Shape {
    public:
    void draw() {
        cout << "Rectangle draw" << endl;
    };
};


int main() {
    Circle c1;
    Rectangle r1;
    c1.draw();
    r1.draw();
    return 0;
}

//Static Variable Concept in function 
class A {
    public:
    void print(){
        static int x = 0;
        cout << "x: " << x << endl;
        x++;
    };
};

int main() {
    A obj;
    obj.print();
    obj.print();
    return 0;
}

// Static object Concept
class ABC
{
public:

    // Constructor
    ABC()
    {
        cout << "Constructor" << endl;
    }

    // Destructor
    ~ABC()
    {
        cout << "Destructor" << endl;
    }
};

int main()
{
    if (true)
    {
        static ABC obj;
    }
    cout << "end of main fnx" << endl;
    return 0;
}