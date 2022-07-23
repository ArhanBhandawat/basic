#include <iostream>
#include <stack>
using namespace std;
int smallElement(int a[], int size){
    stack <int> s ;
    int b[size];
    for(int i = size - 1; i>=0; i--){
        while(!s.empty() && s.top()>=a[i]){
            s.pop();
        }
        if(s.empty()){
            b[i] = -1;
        }
        else{
            b[i] = i;
        }
        s.push(a[i]);
    }
    for(int i = 0;i<size;i++)
        cout << b[i]<< " ";
    cout << endl;
        
}
int main(){
    int a[] = {4,2,1,5,6,3,2,4,2};
    int size = sizeof(a)/sizeof(a[0]);
    smallElement(a, size);
    return 0;
}