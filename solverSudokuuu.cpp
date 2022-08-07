#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isSafe(int board[][], int row, int col, int num){
    for(int r = 0; r<board.size(); r++){
        if(board[r][col]==num){
            return false;
        }
    }
    for(int c = 0; c<board.size(); c++){
        if(board[row][c]==num){
            return false;
        }
    }
    int sqrt = sqrt(board.size());
    int smallrowbox = row - row%sqrt;
    int smallcolbox = col - col&sqrt;
    for(int r = smallrowbox; i<smallrowbox+sqrt; r++){
        for(int c = smallcolbox; c< smallcolbox + sqrt; c++){
            if(board[r][c]==num){
                return false;
            }
        }
    }
    return true;
}
bool solver(int board[][], int n){
    int row = -1, col = -1;
    bool isempty = true;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<n; j++){
            if(board[row][col] == 0){
                row = i;
                col = j;
                isempty = false;
                break;
            }
        }
        if(!isempty){
            break;
        }
    }
    if(isempty){
        return true;
    }
    for(int num = 1; num<=n; num++){
        if(isSafe(board, row, col, num)){
            board[row][col] = num;
            if(solver(board, n)){
                return true;
            }
            else{
                board[row][col] = 0;
            }
        }
    }
    return false;
}
