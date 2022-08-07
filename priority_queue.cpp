#include <iostream>
#include <queue>
using namespace std;
int main(){
    priority_queue <int> pq;
    pq.push(5);
    pq.push(10);
    pq.push(15);
    cout<< pq.size();
    cout<<"\n";
    while(!pq.empty()){
        cout<< pq.top() << " ";
        pq.pop();
    }
    return 0;
}