#include <bits/stdc++.h>
using namespace std;

bool isMajority(int a[],int size, int num)
{   int n=0;
    for(int i=0; i<size; i++)
       if(a[i] == num)
          n++;

    if (n > (size >> 1) )
       return true;

    return false;         
}
int majority(int a[], int size){
     int ansIndex = 0;
     int count = 1;
      for ( int i = 1; i < size; i++)
      {
         if (a[ansIndex] == a[i])
            count++;       
         else 
            count--;
         if (count == 0)
            ansIndex = i;
            count = 1;   
      }
      int num = a[ansIndex];
     if (isMajority(a,size, num))
       cout << "Majority element is:" << a[ansIndex];
     else
       cout << "No majority element exists.";

    return 0;      
   
}
int main()
{   int a[] = {1, 1, 2, 3, 1};
    int size = sizeof(a)/sizeof(a[0]);

    majority(a, size);
}