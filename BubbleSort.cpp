#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 int BubbleSort(int a[], int size)
 {
     
     for(int i=0; i<size-1; i++)
     {   bool swapped = false;
         for(int j = 0; j<size-i-1; j++){
              
             if (a[j] > a[j+1]){
                 swapped = true; 
                 a[j] = a[j] - a[j + 1];
                 a[j+1] = a[j] + a[j + 1]; 
                 a[j] = a[j+1] - a[j];
             }
                         
     }
     if (!swapped)
         break;      
     }
 }
 int main(){
     int a[] = {5, 1, 3, 7, 8, 4};
     int size = sizeof(a)/sizeof(a[0]);
     BubbleSort(a, size);
     cout << "sorted array is:" <<endl;
     for(int i = 0; i<size; i++)
         cout<< a[i]<< " ";
     cout << endl;
     return 0;
 }