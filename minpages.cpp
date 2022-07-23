#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int maxOf(int a[],int size){
   int min = a[0];
     for(int i = 1; i < size; i++)
     {
         if(a[i]>min)
         {
             min = a[i];
         }
     }
    return min; 
}

int sumOf(int a[], int size){
    int sum = 0;
     for(int i = 0; i<size; i++){
       sum += a[i];
    }
    return sum;
}
bool isFeasable(int a[], int size, int res, int k){
    int student = 1, sum = 0;
    for(int i =0; i< size; i++){
        if(sum + a[i]> res ){
            student++;
            sum =a[i];
        }
        else
        {
            sum +=a[i];
        }
    }
    return student<=k;
}

int minpages(int a[],int size, int k){
    int minpages = maxOf(a, size);
    int maxpages = sumOf(a, size);
    int res = 0;
    while(minpages <= maxpages){
        int mid = (minpages + maxpages)/2;
        if(isFeasable(a, size, mid, k)){
            res = mid;
            maxpages = mid-1;
        }
        else{
            minpages = mid + 1;
        }
    }
   return minpages;
}



int main(){
    int a[] = {4, 6, 7, 9, 12, 45, 56, 77, 46, 79 };
    int size = sizeof(a)/sizeof(a[0]);
    cout<< "the desired sum is: " << minpages(a, size, 2);
    cout<< endl;
    return 0;
}
    
         
    
  
   
