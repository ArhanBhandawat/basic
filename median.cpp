#include <iostream>
#include <queue>
using namespace std;
int addNum(int a[],int size){
    priority_queue <int> p;
    priority_queue <int> q;
    int med = 0;
    for (int i = 0; i < size; i++){
       int num = a[i];
       if(p.empty() || p.top()>=num){
          p.push(num);
        }
       else {
          q.push(-num);
        }
       if(p.size()>q.size()+1){
          p.push(-q.top());
          q.pop();
        }
        if(p.size()==q.size()){
           int c = -q.top()/2 +  p.top()/2;
          cout << c;
        }
        else {
           int c = p.top();
           cout << c;
        }
  }
  

}
int main(){
    int a[] = {2, 5, 4,6, 9, 8, 1, 2};
    int size = sizeof(a)/sizeof(a[0]);
    cout << addNum(a, size);
}