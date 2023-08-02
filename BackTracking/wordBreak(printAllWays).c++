#include <bits/stdc++.h> 
void solve(int i,int n,string &s,unordered_map<string,bool> &m,string temp,string sentence,vector<string> &ans)
{
    if(i==n)
    {   if(temp!="" && m[temp]) sentence+=temp;
        else return;
        ans.push_back(sentence);
        return;
    }
    temp+=s[i];
    if(m[temp])
    {   
        solve(i+1,n,s,m,"",sentence+temp+" ",ans);
    }
    solve(i+1,n,s,m,temp,sentence,ans);
}
vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    // Write your code here
    vector<string> ans;
    unordered_map<string,bool> m;
    for(auto x:dictionary)
        m[x]=1;
    solve(0,s.size(),s,m,"","",ans);
    return ans;
}
