#include <iostream>
#include <string>
using namespace std;

void TowerofHanoi(int n , string s , string h , string d){
    //Base case
    if(n == 1){
        cout << "Move disk 1 from" << " " << s << " " << "to" << " " << d << endl; 
        return;
    };
    TowerofHanoi(n-1,s,d,h);
    //Move last disc
    cout << "Move disk " << n << " from" << " " << s << " " << d << endl;
    TowerofHanoi(n-1,h,d,s);
}

int main() {
    int n = 3;
    TowerofHanoi(3,"Source","Helper","Destination");
    return 0;
}