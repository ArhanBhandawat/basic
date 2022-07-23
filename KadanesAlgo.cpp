#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int MaxSum(int a[], int size){
    int cursum = 0, maxsum = 0;
    for(int i = 0; i <size ; i++)
    {
       cursum += a[i];
       if (maxsum < cursum)
          maxsum = cursum;
       if (cursum < 0)
          cursum = 0;
    }
    return maxsum;         
}
 int main()
 {
     int a[] = { -2};
     int size = sizeof(a)/sizeof(a[0]); 
     cout << "Max sum from given array is:"<< MaxSum(a, size); 
      
     return 0; 
 }