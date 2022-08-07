#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int a[],int l, int r, int num){
    int mid = (l+r)/2;
    if (a[mid]==num){
        return mid;
    }
    if (num < a[mid]){
        BinarySearch(a, l, mid-1, num);
    }
    else {
        BinarySearch(a, mid+1, r, num);
    }
}

int bSearch(int a[], int size, int key){
    int low = 0;
    int high = size-1;
    while (low <= high){
        int mid = (low + high)/2;
        if(a[mid] == key)
        return mid;

        if (a[low] < a[mid]){
           if (a[low]<= key && a[mid] > key){
               high = mid-1;
           }
           else{
               low = mid +1;
           }
        }
        else{
            if (key > a[mid] && key <= a[high]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return BinarySearch(a, low, high, key);
}
int main(){
    int a[] = {20, 30, 40, 50, 60, 5, 10};
    int size = sizeof(a)/sizeof(a[0]);
    cout<< "the desired index is: " << bSearch(a, size, 10);
    cout<< endl;
    return 0;
}