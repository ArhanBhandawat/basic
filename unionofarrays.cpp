#include <iostream>
#include <unordered_set>
using namespace std;

int unionofarrays(int a[], int sizea, int b[], int sizeb){
    unordered_set <int> s;
    for(int i = 0; i<sizea; i++){
        s.insert(a[i]);
    }
    for (int i = 0; i<sizeb; i++){
        s.insert(b[i]);
    }

  return s.size();
}

int main(){
    int a[] = {5, 10, 20, 15};
    int b[] = {5, 45, 12, 15};
    int sizea = sizeof(a)/sizeof(a[0]);
    int sizeb = sizeof(b)/sizeof(b[0]);
    cout << "The union of arrays is:" << unionofarrays(a, sizea, b, sizeb);
    cout << endl;
    return 0;
}