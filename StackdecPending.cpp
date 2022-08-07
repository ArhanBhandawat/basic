#include <iostream>
using namespace std;
#define MAX 1000;
class newStack{
    int top;
    public int a[MAX];
    newStack(){top=-1};
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
}
    bool newStack :: push(int x){
        if(top >=MAX-1){
            cout << "Max capacity reached";
            return false;
        }
        else{
            cout << x <<  "Successfully inserted in the stack";
            a[++top] = x;
            return true;
        }
    }
    int pop(){
        if(top == -1){
            throw new Exception("Stack is Empty");
        }
        int res = a[top];
        top--;
        return res;
    }
    int peek(){
        if(top==-1){
            throw new Exception("Stack is empty")
        }
        return a[top];
    }
    bool isEmpty(){
        return top==-1;
    }
