#include <bits/stdc++.h> 
void rec(int n,string s,string ans,vector<string> &res)
{   //cout<<n<<" "<<s<<" "<<ans<<endl;
    if(s.size()==n)
    {
        res.push_back(ans);
        return ;
    }
    for(int i=n;i<s.size();i++)
    {
        for(int j=i;j>n;j--)
        {
            char t=s[j];
            s[j]=s[j-1];
            s[j-1]=t;
        }
        rec(n+1,s,ans+s[n],res);
        for(int j=n;j<i;j++)
        {
            char t=s[j];
            s[j]=s[j+1];
            s[j+1]=t;
        }
    }
}
vector<string> findPermutations(string &s) {
    vector<string> res;
    rec(0,s,"",res);
    return res;
}
