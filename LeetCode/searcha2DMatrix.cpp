// https://leetcode.com/problems/search-a-2d-matrix-ii/
#include<bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int i=0, j=matrix[0].size()-1;
    int rows=matrix.size();
    while(i<rows && j>=0){
        if(matrix[i][j]==target)return true;
        if(target>matrix[i][j])i++;
        else if(target<matrix[i][j])j--;
    }     
    return false;   
}
int main()
{

    return 0;
}