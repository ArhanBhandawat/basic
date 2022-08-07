#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    string food = "Pizza";
    string* ptr = &food;
    cout << ptr << "\n"; // referencing
    cout << *ptr << "\n"; // dereferencing
    return 0;
}