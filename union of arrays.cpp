#include <iostream>
#include <unordered_set>
using namespace std;

int unionofarrays(int a[], int b[]){
    unordered_set <int> s;
    for (int x : a){
        s.insert(x);
    }
    for (int x : b){
        s.insert(x);
    }
    return s;

}
int main(){
    int a[] = {5, 10, 20, 15};
    int b[] = {5, 45, 12, 15};
    cout << "The union of arrays is:" << unionofarrays(a,b);
    cout << endl;
    return 0;
}