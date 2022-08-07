#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Stack{
    queue <int> q1, q2;
    void push(int x){
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
    int pop(){
        int X = q1.front();
        q1.pop();
        return X;
    }
};
int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout << s.pop()<< "\n";
    cout << s.pop()<< "\n";
    cout << s.pop()<< "\n";
    return 0;
}