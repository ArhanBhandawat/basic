#include <bits/stdc++.h>
using namespace std;

int InfiniteSearch(int a[], int key){
    int low = 0;
    int high = 1;
    while (a[high] < key){
        low = high;
        high = 2*high;
    }
    return BinarySearch(a, low, high, key);
}