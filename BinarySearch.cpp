#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int Binarysearch(int a[],int l, int r, int num){
    int mid = (l+r)/2;
    if (a[mid]==num){
        return mid;
    }
    if (num < a[mid]){
        Binarysearch(a, l, mid-1, num);
    }
    else {
        Binarysearch(a, mid+1, r, num);
    }
}
int main(){
    int a[] = {4, 6, 7, 9, 12, 45, 56, 77, 46, 79 };
    int size = sizeof(a)/sizeof(a[0]);
    cout<< "the desired index is: " << Binarysearch(a, 0, size-1, 77);
    cout<< endl;
    return 0;
}