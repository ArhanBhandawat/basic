#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    unordered_set <int> s;
    s.insert(5);
    s.insert(10);
    s.insert(20);
    s.insert(15);
    if(s.find(5)==s.end()){
        cout << "not found" << endl;
    }
    else{
        cout<< "Found!" << endl;
    }
    for(auto it = s.begin(); it!=s.end(); it++){
        cout << (*it)<< " ";
    }
    s.clear();
    cout << s.size()<< endl;
}