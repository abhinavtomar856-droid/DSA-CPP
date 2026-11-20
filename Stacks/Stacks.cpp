#include <bits/stdc++.h>
using namespace std;

//Implement a stack using a vector.
class Stack{
    vector<int> v;
public:
    void push(int val){
        v.push_back(val);
    }

    void pop(){
        v.pop_back();
    }

    int top(){
        return v[v.size()-1];
    }

    bool isEmpty(){
        if(v.size() == 0){
            return true;
        }else{
            return false;
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.isEmpty()){
        cout << s.top() << endl;
        s.pop();
    }
    return 0;

}


#include <bits/stdc++.h>
using namespace std;

//Implement a stack using linked list.
class Stack{
    list<int> ll;
public:
    void push(int val){
        ll.push_front(val);

    }
    void pop(){
       ll.pop_front();
    }

    int top(){
        return ll.front();
       
    }

    bool isEmpty(){
        if(ll.size() == 0){
            return true;
        }else{
            return false;
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.isEmpty()){
        cout << s.top() << endl;
        s.pop();
    }
    return 0;

}