#include <iostream>
#include <stack>
using namespace std;
#define R 6
#define C 5
int previousSmaller(int a[], int size, int ps[]){
    stack <int> s;
    for(int i = 0; i<size; i++){
        while(!s.empty() && a[s.top()]>=a[i]){
            s.pop();
        }
        if(s.empty()){
            ps[i] = -1;
        }
        else{
            ps[i] = s.top();
        }
        s.push(i);
    }
    for (int i =0; i<size ; i++){
        cout << ps[i] << " ";
        cout << "\n";
    }
}
int nextSmaller(int a[], int size, int ns[]){
    stack <int> s ;
    for(int i = size - 1; i>=0; i--){
        while(!s.empty() && a[s.top()]>=a[i]){
            s.pop();
        }
        if(s.empty()){
            ns[i] = size;
        }
        else{
            ns[i] = s.top();
        }
        s.push(i);
    }
    for(int i = 0;i<size;i++)
        cout << ns[i]<< " ";
    cout << endl;
        
}

int areaArr(int a[], int size, int b[], int ns[], int ps[]){
    for(int i = 0; i<size; i++){
        b[i] = (ns[i] - ps[i] - 1)*a[i];
    }
    int lar = b[0];
    for(int i = 1; i<size; i++){
        if(b[i]>lar){
            lar = b[i];
        }
    }
    return lar;
}
int maxAreaRect(int a[R][C]){
    int curRow[] = {1,1,0,1,1};
    int scr = sizeof(curRow)/sizeof(curRow[0]);
    int crns[scr];
    int curps[scr];
    previousSmaller(curRow, scr, curps);
    nextSmaller(curRow, scr, crns );
    int randArr[scr];
    int maxAns = areaArr(curRow, scr, randArr, crns, curps);
    cout<< maxAns;
    for(int i = 1; i<R; i++){
        for(int j = 0; j<C; j++){
            if(a[i][j]==1){
                curRow[j] += a[i][j];              
            }
            else{
                curRow[j] = 0;
            }
        }
        int ns[C];
        int ps[C];
        int randArr1[C];
        nextSmaller(curRow, C, ns);
        previousSmaller(curRow, C, ps);
        int curAns = areaArr(curRow, scr, randArr1, ns, ps);
        maxAns = max(maxAns, curAns);
    }
    return maxAns;
}
int main(){
    int a[][C] = {
        {1,1, 0, 1, 1},
        { 1, 1, 1, 1,1 },
        { 0,1, 1, 1, 1 },
        { 1, 1, 1,1 ,1 },
        {1,0,1,1,1},
        {1,1,1,1,1}
    };
    cout << maxAreaRect(a);
    return 0;
    
}