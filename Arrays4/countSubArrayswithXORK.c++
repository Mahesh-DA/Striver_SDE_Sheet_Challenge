#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    int n=arr.size(),ans=0,pre=0;
    unordered_map<int,int> m;
    m[0]=1;
    for(int i=0;i<n;i++)
    {
        pre^=arr[i];
        if(m[pre^x])
            ans+=m[pre^x];
        m[pre]++;
    }
    // for(int i=0;i<n;i++)
    // {   int cur=0;
    //     for(int j=i;j<n;j++)
    //     {
    //         cur=cur^arr[j];
    //         if(cur==x)
    //             ans++;
    //     }
    // }
    // N^2 time
    return ans;
}
