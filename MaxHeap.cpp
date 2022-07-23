
#include <iostream>
using namespace std;
 
#define MAX 1000 
 
void heapify(int arr[], int n, int i)
{
    // Find parent
    int parent = (i - 1) / 2;
 
    if (arr[parent] > 0) {
        
        if (arr[i] > arr[parent]) {
            swap(arr[i], arr[parent]);
 
            heapify(arr, n, parent);
        }
    }
}
 
void insertNode(int arr[], int n, int Key)
{
    
    n = n + 1;
 
    
    arr[n - 1] = Key;
 
    
    heapify(arr, n, n - 1);
}
 

void printArray(int arr[], int n)
{
    for (int i = 0; i <= n; ++i)
        cout << arr[i] << " ";
 
    cout << "\n";
}

void deletenode(int a[], int n){
    a[0] = a[n-1];
    n =n 1;
    heapify(a, n, 0);
}
 
// Driver Code
int main()
{
   
    int arr[MAX] =  { 50, 30, 40, 10, 5, 20, 30};
 
    int n = 7;
 
    int key = 60;
 
    deletenode(arr, n);
    printArray(arr, n);

    // Final Heap will be:
    // 15
    //    /   \
    // 5     10
    //  / \   /
    // 2   4 3
    return 0;
}