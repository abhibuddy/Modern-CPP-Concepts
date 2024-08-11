#include <iostream>
#include <vector>
#include <algorithm>
// rotate a matix by 90 degree
// 1. take the transpose of the matrix 
// 2. reverse each of the row
//
void printmatrix(const std::vector<std::vector<int>>& mat)
{
    for(const auto& row:mat)
    {
        for(const auto& ele:row)
        {
            std::cout<<ele<<" ";
        }
        std::cout<<std::endl;
    }
}
void transposeMat(std::vector<std::vector<int>>& mat)
{
    int n = mat.size();
    for(int i =0;i< n ; i ++)
    {
        for(int j=i;j<n;j++)
        {
            std::swap(mat[i][j],mat[j][i]);
        }
        std::cout<<std::endl;
    }
}
void reverseMat(std::vector<std::vector<int>>& mat)
{
    int n=mat.size();
    for(int i=0;i<n;i++)
    {
        std::reverse(mat[i].begin(),mat[i].end());
    }
}
int main()
{
    std::vector<std::vector<int>> mat= {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    printmatrix(mat);
    std::cout<<"transposing the matix : row <=> col"<<std::endl;
    transposeMat(mat);
    printmatrix(mat);
    std::cout<<"reversing each row of the matrix"<<std::endl;
    reverseMat(mat);
    printmatrix(mat);
    std::cout<<std::endl;
    return 0;
}