#include<iostream>
#include<vector>


void printbaord(std::vector<std::vector<char>> board)
{
    int n = board.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            std::cout<<board[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    std::cout<<"------------------------------"<<std::endl;
}
bool isSafe(std::vector<std::vector<char>> board,int row,int col)
{
    int n=board.size();
    // horizontal
    for(int j=0;j<n;j++)
    {
        if(board[row][j]=='Q')
        {
            return false;
        }
    }
    // vertical
    for(int i=0;i<row;i++)
    {
        if(board[i][col]=='Q')
        {
            return false;
        }
    }
    // diagonal left
    for(int i=row,j=col;i>=0 && j>=0;i--,j--)
    {
        if(board[i][j]=='Q')
        {
            return false;
        }
    }
    // diagonal right
    for(int i=row,j=col;i>=0 && j<n;i--,j++)
    {
        if(board[i][j]=='Q')
        {
            return false;
        }
    }
    return true;
}
void nQueen(std::vector<std::vector<char>> board,int row)
{
    int n=board.size();
    if(row==n)
    {
        printbaord(board);
        return;
    }
for(int j=0;j<n;j++)
{
    if(isSafe(board,row,j)){
    board[row][j]='Q';
    nQueen(board,row+1);
    board[row][j]='.';
    }
}
}
int main() {
    std::vector<std::vector<char>> board;
    int n=4;
    for(int i=0;i<n;i++)
    {
        std::vector<char> newRow;
        for(int j=0;j<n;j++)
        {
            newRow.push_back('.');
        }
        board.push_back(newRow);
    }
    nQueen(board,0);
    return 0;
}