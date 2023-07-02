#include <bits/stdc++.h> 
void sol(vector<int> &arr,vector<int> v,int n,vector<vector<int>>&s)
{
    if(n==arr.size())
    {   sort(v.begin(),v.end());
        s.push_back(v);
        return;
    }
    int j=n+1;
    while(j<arr.size() && arr[j]==arr[n]){ j++;}
    sol(arr,v,j,s);
    while(n<j)
    {   v.push_back(arr[n]);
        sol(arr,v,j,s);
        n++;
    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    sort(arr.begin(),arr.end(),greater<int>());
    vector<vector<int>> ans;
    vector<int> v;
    sol(arr,v,0,ans);
    sort(ans.begin(),ans.end());
    return ans;
}
