#include<iostream>
using namespace std;
void printsudoku(int sudoku[][9]){
    for (int i=0;i<9;i++){
         for (int j=0;j<9;j++){
            cout<<sudoku[i][j]<< " ";
    }
    cout << endl;
}
}
bool sudokusolver (int sudoku [9][9],int row,int col){
    if (row==9){
        printsudoku (sudoku);
        return true;
    }
int newRow = row;
int newCol = col+1;
if (col+1==9){
    newRow = row+1;
    newCol =0;
}
if (sudoku [row][col]!=0){
    return sudokusolver(sudoku,newRow,newCol);
}

    
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


for(int dig=1;dig<=9;dig++)
    if (isSafe (sudoku,row,col,dig){
        
    })
}