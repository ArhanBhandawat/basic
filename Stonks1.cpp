#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int MaxProfit(int a[])
{
    int minpriceIndex = 0, Maxprofit = 0, profit = 0;
     int size = sizeof(a)/sizeof(a[0]);
    for(int i = 1; i < size; i++)
      {if (a[minpriceIndex] > a[i])
          minpriceIndex = i;

      profit = a[i] - a[minpriceIndex];

      if (profit > Maxprofit)
         Maxprofit = profit;
      }

    return Maxprofit;         
}

int main(){
    int a[] = {3, 4, 1, 2, 7, 6, 9, 2};
   
    cout << "Maximum profit that can be booked is:" << MaxProfit(a);
    return 0;
}