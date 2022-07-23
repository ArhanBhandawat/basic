#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swap(int a[], int x, int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}
void heapify(int a[], int size, int i){
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    if(l<=size && a[l]>a[largest]){
        largest = l;
    }
    if(r<=size && a[r]>a[largest]){
        largest = r;
    }
    if(largest!=i){
        swap(a, i, largest);
        heapify(a, size, largest);
    }
}
void buildHeap(int a[], int size){
    for(int i = (size/2) - 1; i >= 0; i--){
        heapify(a, size, i);
    }  
}
void printHeap(int a[],int size){
    for(int i = 0; i<size ; i++)
        cout << a[i] << " ";
    cout << "\n";
  
}
int main(){
    int a[] = { 20, 10, 30, 25, 50, 35};
    int size = sizeof(a)/sizeof(a[0]);
    buildHeap(a, size);
    printHeap(a, size);
    return 0;
}