#include<iostream>
using namespace std;
int main (){
   bool isSafe(int sudoku [9][9],int row,int col,int dig) {
    for (int i=0;i<=8;i++){
        if (sudoku[i][col]==dig){
            return false;
        }
    }
}
for (int j=0;j<=8;j++){
        if (sudoku[row][j]==dig){
            return false;
        }
    }
}