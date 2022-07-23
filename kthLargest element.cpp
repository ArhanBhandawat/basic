#include <iostream>
#include <queue>
using namespace std;
int pqify(int a[], int size, int k){
    priority_queue <int> pq;
    for(int i = 0; i< size; i++){
        pq.push(a[i]);
    }
    for(int i = 1; i<k; i++){
        pq.pop();
    }
    return pq.top();
}
int main(){
    int a[] = {20, 10, 30, 50, 60, 40};
    int size = sizeof(a)/sizeof(a[0]);
    int k = pqify(a, size, 3);
    cout << "The largest element is" << k;
    cout << " ";
    return 0;
}