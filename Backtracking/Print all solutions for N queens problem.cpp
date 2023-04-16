#include<iostream>
using namespace std;

bool canPlace(int n, int board[][20], int i, int j)
{
    for(int k = i-1; k>=0; --k)
    {
        if(board[k][j]== 1 )
        {
            return false;
        }
    }

    int x = i;
    int y = j;
    while(x>=0 && y>=0)
    {
        if(board[x][y] == 1)
        {
            return false;
        }
        x--;
        y--;
    }

    x = i;
    y = j;
    while(x>=0 && y<n)
    {
        if(board[x][y] == 1)
        {
            return false;
        }
        x--;
        y++;
    }

    return true;
}

void printBoard(int n, int board[][20])
{
    for(int i = 0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int solveNQueen(int n, int board[][20], int i)
{
    if(i==n)
    {
        printBoard(n,board);
        return 1;
    }

    int ways = 0;

    for(int j=0; j<n; ++j)
    {
        if(canPlace(n, board, i, j))
        {
            board[i][j] = 1;
            ways += solveNQueen(n, board, i+1);

            board[i][j] = 0;
        }
    }
    return ways;
}

int main()
{
    int board[20][20] = {0};
    int n;
    cin>>n;
    solveNQueen(n,board,0);
    //cout<<"Ways to solve n queens problem where n = "<<n<< " is: "<<solveNQueen(n,board,0);

    return 0;
}
