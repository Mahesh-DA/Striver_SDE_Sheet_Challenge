#include <bits/stdc++.h>
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here. FINAL APPROACH ALL ARE CORRECT BUT TLE
    unordered_map<int,int> m;
    for(auto x:arr)
    {   
        m[x]=1;
    }
    int mx=0;
    for(int i=0;i<n;i++)
    {
        if(!m[arr[i]-1])
        {   int x=arr[i];
            while(m[x])
            {
                x++;
            }
            mx=max(mx,x-arr[i]);
        }
    }
    return mx;
    /*for(int i=0;i<n;i++)
    {   int x=arr[i];
        cur=0;
        while(m[x])
        {   
            cur+=m[x];
            m[x]=0;
            x++;
        }
        m[arr[i]]=cur;
        mx=max(cur,mx);
    }
    1st Approach
    */ 

    // 2ND APPROACH 
    //for(auto it=m.begin();it!=m.end();it++)
    // {   int x=(it->first);
    //     // cout<<x<<" ";
    //     cur=0;
    //     while(m[x])
    //     {   
    //         cur+=m[x];
    //         m[x]=0;
    //         x++;
    //         try
    //         {  
    //             m.at(x);   
    //         }
    //         catch(const out_of_range &e) {  
    //             break;
    //         }
    //     }
    //     it->second=cur;
    //     mx=max(cur,mx);
    // }
    return mx;
}
