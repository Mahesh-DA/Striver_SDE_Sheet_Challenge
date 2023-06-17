#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    unordered_map<int,vector<pair<int,int>>> m;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            m[target-(arr[i]+arr[j])].push_back({i,j});
        }
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int x=arr[i]+arr[j];
            if(m[x].size()>0)
            {   if(m[x].size()>3)
                    return "Yes";
                for(auto p:m[x])
                {
                    if(p.first!=i && p.second!=j)
                        return "Yes";
                }
            }
        }
    }
    return "No";
}
