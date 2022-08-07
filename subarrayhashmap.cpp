#include <bits/stdc++.h>
using namespace std;

int subarr(int a[], int size, int sum){
    unordered_map<int, int> umap;
    int cursum = 0;
    int start =0;
    int end = -1;
    for(int i =0; i< size; i++){
        cursum += a[i];
        if(cursum - sum == 0){
            start = 0;
            end = i;
        }
        if(umap.find(cursum - sum) != umap.end()){
            cout << "sum found between indexes:" 
              << umap[cursum - sum] + 1 
              << "to" << i << endl;
            return 1;
        }
        umap[cursum] = i;
    }
    cout << "No such subarray found!";
}
int main()
{
    int arr[] = {10, 2, -2, -20, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = -10;
 
    subarr(arr, n, sum);
 
    return 0;
}