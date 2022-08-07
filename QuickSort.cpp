#include <bits/stdc++.h>
using namespace std;


void swap(int a[], int x, int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}
int partition(int a[], int l, int h){
    int pivot = a[l];
    int i = l;
    int j = h;

    while(i<j){
        while(a[i]<=pivot) i++;
        while(a[j]>=pivot) j--;
        if(i<j)
            swap(a, i, j);
    }
    swap(a, j, l);
    return j;
}

void quicksort(int a[], int l, int h){
    if(l<h){
        int pivot = partition(a, l, h);
        quicksort(a, l, pivot-1);
        quicksort(a, pivot+1, h); 
    }
}
int main(){
     int a[] = {5, 1, 3, 7, 8, 4};
     int size = sizeof(a)/sizeof(a[0]);
     int last = size - 1;
     quicksort(a, 0, last);
     cout << "sorted array is:" <<endl;
     for(int i = 0; i<size; i++)
         cout<< a[i]<< " ";
     cout << endl;
     return 0;
 }
