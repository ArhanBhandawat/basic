#include <iostream>
#include<deque>
using namespace std;

void slideWinMax(int a[], int size, int k){
    deque<int> dq;
    int i;
    for(i = 0; i<k; i++){
        while(!dq.empty() && a[i]>=a[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    for(; i<size; ++i){
        cout << a[dq.front()]<< " ";
        while(!dq.empty() && dq.front()<=i-k){
            dq.pop_front();
        }
        while(!dq.empty() && a[i] >= a[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    cout << a[dq.front()];
}
int main(){
    int a[] = {4,1,3,5,1,2,3,2,1,1,5};
    int size = sizeof(a)/sizeof(a[0]);
    slideWinMax(a, size, 3);
    return 0;
}