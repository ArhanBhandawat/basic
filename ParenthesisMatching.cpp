#include <iostream>
#include<bits/stdc++.h>
#include <stack>
using namespace std;
bool isOpening(char c){
    return c == '(' || c =='[' || c =='{';
}
bool isMatching(char a, char b){
    return a == '(' && b == ')' ||
           a == '{' && b == '}' ||
           a =='[' && b == ']';
}
bool isParenthesisMatching(string str){
    stack <char> s;
    for (int i = 0; i < str.length(); i++){
        char cur = str[i];
        if(isOpening(cur)){
            s.push(cur);
        }
        else{
            if(s.empty()){
                return false;
            }
            else if (!isMatching(s.top(), cur )) {
                return false;
            }
            else {
                s.pop();
            }
        }
        
    }
    return s.empty();
}
int main(){
    string str = "()({})";
    int size = str.length();
    cout << isParenthesisMatching(str);
}