#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int merge(int a[],int l, int mid, int r){
    int b[r + 1];
    int i = l;
    int j = mid + 1;
    int k = l;
    while (i <= mid && j <= r){
        if (a[i] < a[j]){
            b[k] = a[i];
            i++;
        }
        else{
             b[k] = a[j];
              j++;
            }     
    k++;
    }  

    if(i > mid){
        while(j<=r){
            b[k] = a[j];
            k++;
            j++;
        }  
    }
    else 
    { 
        while(i<=mid)
        {
           b[k] = a[i];
           k++;
           i++;
        }
    }

    for(int z=l; z<=r; z++){
         a[z] = b[z];
    }
}
int mergesort(int a[], int l, int r )
{
     if (l < r)
       {
           int mid = (l+r)/2;
           mergesort(a, l, mid);
           mergesort(a, mid + 1, r);
           merge(a, l, mid, r);
        }  
         
}
int main(){
     int a[] = {5, 1, 3, 7, 8, 4};
     int size = sizeof(a)/sizeof(a[0]);
     int last = size - 1;
     mergesort(a, 0, last);
     cout << "sorted array is:" <<endl;
     for(int i = 0; i<size; i++)
         cout<< a[i]<< " ";
     cout << endl;
     return 0;
 }