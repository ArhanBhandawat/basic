#include <iostream>
#include <unordered_set>
using namespace std;

int intersect(int a[], int sizea, int b[], int sizeb){
    unordered_set <int> s;
    for(int i = 0; i<sizea; i++){
        s.insert(a[i]);
    }
    int count = 0;
    for(int i =0; i<sizeb; i++){
        if(s.find(b[i])!=s.end()){
            count++;
            s.erase(b[i]);
        }
        else{
            s.insert(b[i]);
        }
    }
    return count;
}
int main(){
    int a[] = {5, 10, 20, 15};
    int b[] = {5, 45, 12, 15};
    int sizea = sizeof(a)/sizeof(a[0]);
    int sizeb = sizeof(b)/sizeof(b[0]);
    cout << "Common elements are:" << intersect(a, sizea, b, sizeb);
    cout << endl;
    return 0;
}