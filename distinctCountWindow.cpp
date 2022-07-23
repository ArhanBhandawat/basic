#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void distinctCount(int a[], int size, int k){
    unordered_map<int, int> umap;
    int dist_count = 0;
    for(int i = 0; i < k; i++){
        if(umap[a[i]]==0){
            dist_count++;
        }
        umap[a[i]] += 1;
    }
    cout << dist_count <<endl;
    for(int i = k; i<size; i++){
        if(umap[a[i-k]]==1){
            dist_count--;
        }
        umap[a[i-k]] -=1;
        if(umap[a[i]]==0){
            dist_count++;
        }
        umap[a[i]] += 1;
        cout << dist_count << endl;
}
}
int main(){
    int a[] = {1, 2, 2, 1, 3, 1, 1, 3};
    int size  = sizeof(a)/sizeof(a[0]);
    distinctCount(a, size, 4);
    return 0;
}