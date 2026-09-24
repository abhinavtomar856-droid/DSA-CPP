#include <iostream>
using namespace std;
//Ques-1
//Print the name N times using recursion

void printName(int i,int n) {
    //Base case or condition
    if(i>n){
        return;
    }
    cout << "Abhinav Tomar" << endl;
    printName(i+1 , n);
};

int main(){
    int n;
    cout << "Enter the value of N:" << endl;
    cin >> n;
    printName(1,n);
    return 0;
}

//Ques 2
//Print linearly from N to 1

void PrintNumber(int n , int i){
    //Base case or condition
    if(n<i){
        return;
    }
    cout << n << endl;
    PrintNumber(n-1,i);
};

int main(){
    int n;
    cout << "Enter the value of N:" << endl;
    cin >> n;
    PrintNumber(n,1);
    return 0;
}

//Ques 3
//Print linearly from 1 to N using backtracking

void PrintNumber(int i , int n){
    if(i<1){
        return;
    };
    PrintNumber(i-1,n);
    cout << i << endl;
}


int main() {
    int n;
    cout <<  "Enter the value of N:" << endl;
    cin >> n;
    PrintNumber(n,n);
    return 0;
}

//Ques 4 
//Print linearly from N to 1 using backtracking

void PrintNumber(int i , int n) {
    if(i>n){
        return;
    };
    PrintNumber(i+1,n);
    cout << i << endl;
};

int main() {
    int n;
    cout << "Enter the value of N : " << endl;
    cin >> n;
    PrintNumber(1,n);
    return 0;
}