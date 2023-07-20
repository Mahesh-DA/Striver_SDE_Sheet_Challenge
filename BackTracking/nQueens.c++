#include<bits/stdc++.h>
void sol(int rw,int n,unordered_map<int,bool>& c,unordered_map<int,bool> &ld,unordered_map<int,bool> &rd,vector<int> &v,vector<vector<int>> &ans)
{
    if(rw==n)
    {
        ans.push_back(v);
        return;
    }
    for(int i=0;i<n;i++)
    {
        int ldr=rw-i,rdr=rw-(n-i-1);
        if(!c[i] && !ld[ldr] && !rd[rdr])
        {
            c[i]=1;
            ld[ldr]=1;
            rd[rdr]=1;
            v[(rw*n)+i]=1;
            sol(rw+1,n,c,ld,rd,v,ans);
            c[i]=0;
            ld[ldr]=0;
            rd[rdr]=0;
            v[(rw*n)+i]=0;
        }
    }
}
vector<vector<int>> solveNQueens(int n) {
    // Write your code here.
    unordered_map<int,bool> c,ld,rd;
    vector<vector<int>> ans;
    vector<int> v(n*n);
    sol(0,n,c,ld,rd,v,ans);
    return ans;
}
