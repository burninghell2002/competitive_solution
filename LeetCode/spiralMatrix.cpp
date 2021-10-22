// https://leetcode.com/problems/spiral-matrix-ii/
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        vector<int>temp(n, 0);
        ans.push_back(temp);
    }
    int num=1;
    int ci=0, cf=n-1, ri=0, rf=n-1;
    while(num!=(n*n)+1){
        for(int i=ci;i<=cf;i++)
            ans[ri][i]=num++;
        if(num==(n*n)+1)break;
        ri++;
        for(int i=ri;i<=rf;i++)ans[i][cf]=num++;
        if(num==(n*n)+1)break;
        cf--;
        for(int i=cf;i>=ci;i--)ans[rf][i]=num++;
        if(num==(n*n)+1)break;
        rf--;
        for(int i=rf;i>=ri;i--)ans[i][ci]=num++;
        if(num==(n*n)+1)break;
        ci++;
    }  
    return ans;      
}
int main()
{
    vector<vector<int>>arr=generateMatrix(3);
    cout<<"done";
    return 0;
}