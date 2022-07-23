#include <iostream>
#include <stack>
using namespace std;
int previousSmaller(int a[], int size, int ps[]){
    stack <int> s;
    for(int i = 0; i<size; i++){
        while(!s.empty() && a[s.top()]>=a[i]){
            s.pop();
        }
        if(s.empty()){
            ps[i] = -1;
        }
        else{
            ps[i] = s.top();
        }
        s.push(i);
    }
    for (int i =0; i<size ; i++){
        cout << ps[i] << " ";
        cout << "\n";
    }
}
int nextSmaller(int a[], int size, int ns[]){
    stack <int> s ;
    for(int i = size - 1; i>=0; i--){
        while(!s.empty() && a[s.top()]>=a[i]){
            s.pop();
        }
        if(s.empty()){
            ns[i] = size;
        }
        else{
            ns[i] = s.top();
        }
        s.push(i);
    }
    for(int i = 0;i<size;i++)
        cout << ns[i]<< " ";
    cout << endl;
        
}

int areaArr(int a[], int size, int b[], int ns[], int ps[]){
    for(int i = 0; i<size; i++){
        b[i] = (ns[i] - ps[i] - 1)*a[i];
    }
    int lar = b[0];
    for(int i = 1; i<size; i++){
        if(b[i]>lar){
            lar = b[i];
        }
    }
    cout << lar ;
}
int main(){
    int a[] = {4,2,1,5,6,3,2,4,2};
    int size = sizeof(a)/sizeof(a[0]);
    int b[size];
    int ns[size];
    int ps[size];
    nextSmaller(a, size, ns);
    previousSmaller(a, size, ps);
    areaArr(a, size, b, ns, ps);
    return 0;
}