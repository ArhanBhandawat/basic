#include <iostream>
#include <stack>
using namespace std;
int smallElement(int a[], int size){
    stack <int> s ;
    for(int i = 0; i<size; i++){
        while(!s.empty() && s.top()>=a[i]){
            s.pop();
        }
        if(s.empty()){
            cout << -1 << " ";
        }
        else{
            cout << s.top()<< " ";
        }
        s.push(a[i]);
    }     
}
int main(){
    int a[] = {4,2,1,5,6,3,2,4,2};
    int size = sizeof(a)/sizeof(a[0]);
    smallElement(a, size);
    return 0;
}