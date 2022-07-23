#include <iostream>
#include <queue>
using namespace std;
int minCost(int a[], int size){
    priority_queue <int> pq;
    for(int i = 0; i<size; i++){
        pq.push(-a[i]);
        
    }
    int sum = 0;
    while(pq.size()!=1){
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
         int c = a+b;
         sum +=c;
        pq.push(c);
    }
    return sum;
    
}
int main(){
    int a[] = {2, 5, 4, 8, 6, 9};
    int size = sizeof(a)/sizeof(a[0]);
    cout << -minCost(a, size);
}