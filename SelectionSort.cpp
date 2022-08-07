#include <bits/stdc++.h>
using namespace std;

void swap(int a[], int x, int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}
int SelectionSort(int a[], int size){
    int minindex = 0;
    for (int i = 0; i < size; i++){
        minindex = i;
        for(int j =i+1; j<size; j++){
            if (a[j]<a[minindex])
                minindex = j;
        }
       swap(a, i, minindex);
    }
}
int main(){
     int a[] = {5, 1, 3, 7, 8, 4};
     int size = sizeof(a)/sizeof(a[0]);
     SelectionSort(a, size);
     cout << "sorted array is:" <<endl;
     for(int i = 0; i<size; i++)
         cout<< a[i]<< " ";
     cout << endl;
     return 0;
 }