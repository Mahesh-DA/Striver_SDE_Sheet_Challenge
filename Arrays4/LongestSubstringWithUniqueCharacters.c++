#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    unordered_map<char,int> m;
    int ans=0,cur=0,j=0;
    for(int i=0;i<input.size();i++)
    {
        if(m[input[i]])
        {   if(m[input[i]]>j)
            {
                ans=max(ans,cur);
                cur=i-m[input[i]];
                j=m[input[i]]-1;
            }
        }
        m[input[i]]=i+1,cur++;
        // cout<<ans<<" "<<cur<<" "<<j<<endl;
    }
    return max(ans,cur);
}
