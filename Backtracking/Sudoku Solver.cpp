#include<iostream>
using namespace std;

void printSudokuBoard(int mat[][9], int n)
{
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            if(j%3 == 0 && j!=0)
            {
                cout<<"| ";
            }
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
        if((i+1)%3 == 0)
        {
            for(int j=0; j<n+2; ++j)
            {
                cout<<"- ";
            }
            cout<<endl;
        }
    }
}

bool isSafe(int mat[][9], int i, int j, int num, int n)
{
    //check for row and col
    for(int k=0; k<n; ++k)
    {
        if(mat[k][j]==num || mat[i][k] == num)
        {
            return false;
        }
    }

    //check for sub grid
    int sx = (i/3)*3;
    int sy = (j/3)*3;

    for(int x=sx; x<sx+3; ++x)
    {
        for(int y=sy; y<sy+3; ++y)
        {
            if(mat[x][y] == num)
                return false;
        }
    }

    return true;
}

bool solveSudoku(int mat[][9], int i, int j, int n)
{
    //base case
    if(i==n)
    {
        //print solution
        printSudokuBoard(mat,n);
        return true;
    }

    //rec case
    if(j==n)
    {
        return solveSudoku(mat,i+1,0,n);
    }

    //skip prefilled cell
    if(mat[i][j] != 0)
    {
        return solveSudoku(mat,i,j+1,n);
    }

    for(int num=1; num<=n; ++num)
    {
        if(isSafe(mat,i,j,num,n))
        {
            mat[i][j] = num;
            bool solveSubProblem = solveSudoku(mat,i,j+1,n);

            if(solveSubProblem)
            {
                return true;
            }
        }
    }
    mat[i][j] = 0;
    return false;
}

int main()
{
    int n = 9;
    int mat[9][9] =
    {
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}
    };

    if(!solveSudoku(mat,0,0,n))
    {
        cout<<"No solution exists"<<endl;
    }
    return 0;
}

