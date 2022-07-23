#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int majority(vector<int> a){
    int num = A[0];
    int count = 1;
    if(A.size()==1){
        return num;
    }
    for(int i = 1; i<A.size();i++){
        if(A[i]==num){
            count++;
        }
        else{
            count--;
        }
        
            if(count==0){
                num = A[i];
                count = 1;
            }
    }
    //check if num is actually the (>n/2)
}