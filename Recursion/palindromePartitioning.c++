#include <bits/stdc++.h> 
bool is_pd(string s)
{
    int i=0,j=s.size()-1;
    while(i<j)
    {
        if(s[i++]!=s[j--])
            return 0;
    }
    return 1;
}
void sol(string &s,int n,string t,vector<string> v,vector<vector<string>> &ans)
{
    if(n==s.size())
    {   if(t=="")
            ans.push_back(v);
        return;
    }
    t+=s[n];
    sol(s,n+1,t,v,ans);
    if (is_pd(t))
    {   v.push_back(t);
        sol(s,n+1,"",v,ans);
    }
}
vector<vector<string>> partition(string &s) 
{
    // Write your code here.
    vector<vector<string>> ans;
    vector<string> v;
    sol(s,0,"",v,ans);
    return ans;
}
