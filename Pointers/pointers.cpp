#include <iostream>
using namespace std;

void change(int &x){
    x = 20;
}

//Basic concept of pointers
int main() {
    int a = 10;
    int* ptr = &a;
    //Null Pointer
    int* ptr2 = NULL;
    cout << ptr << endl;
    cout << ptr2 << endl;
    return 0;
}

