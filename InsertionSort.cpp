#include <bits/stdc++.h>
using namespace std;

int InsertionSort(int a[], int size){
    for (int i = 1; i < size; i++){
        int temp = a[i];
        int j = i-1;
        while (j>=0 && a[j]>temp){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;  
    }
        
}
int main(){
     int a[] = {5, 1, 3, 7, 8, 4};
     int size = sizeof(a)/sizeof(a[0]);
     InsertionSort(a, size);
     cout << "sorted array is:" <<endl;
     for(int i = 0; i<size; i++)
         cout<< a[i]<< " ";
     cout << endl;
     return 0;
 }