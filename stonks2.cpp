#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int MaxProfit(int a[], int size){
    int profit = 0;

    for (int i = 1; i < size; i++)
     {
         if (a[i] > a[i-1])       
             profit += a[i] - a[i-1];
        
     }
    
   return profit;       
}
 int main(){
     int a[] = {5, 2, 6, 1, 4, 7, 3, 6};
     int size = sizeof(a)/sizeof(a[0]);
     cout << "Maximum profit over the course of given time is:" << MaxProfit(a, size);
     return 0;
  }