#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int Rainwater(int a[], int size){
   int left[size];
   int right[size];
   int res = 0;
   left[0] = a[0];
    

    for (int i = 1; i < size; i++)
        left [i] = max(left[i-1], a[i]);


   right[size - 1] = right[size - 1];
    for (int i = size-2; i>=0; i--)
        right[i] = max(a[i], right[i + 1]);    
         
    
   for( int i = 0; i< size; i++)
        res += min(left[i], right[i]) - a[i];

    
   return res;   
          
  
  }
  int main(){
      int a[] = {5, 4, 2, 4, 0, 1, 2, 6};
      int size = sizeof(a)/sizeof(a[0]);
      cout << "Amount of trapped water is:" << Rainwater(a, size);
      return 0;
  }
  
