#include <iostream>
using namespace std;

void swap(int a[], int x, int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

int deletenode(int a[], int n){
    a[0] = a[n-1];
    n = n-1;
    int i = 0;
     
    while(i<n){
        int left = a[2*i + 1];
         int right = a[2*i + 2];
         int larger;
         if (left > right){
             larger = 2*i + 1;
         }
         else{
             larger = 2*i + 2;
         }
         if(a[i] < a[larger]){
             swap(a, i, larger);
             i = larger;
         }
         else{
             return n;
         }
    }
}
 
// Driver Code
int main()
{
    int arr[] =  { 50, 40, 45, 30, 20, 5, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    n = deletenode(arr, n);
    for (int i = 0; i<n; ++i)
        cout << arr[i] <<" ";
    cout << "\n";
    
    return 0;
}