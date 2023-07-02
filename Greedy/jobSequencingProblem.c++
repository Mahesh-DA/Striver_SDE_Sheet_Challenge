#include <bits/stdc++.h> 
bool compare(const vector<int> &a,const vector<int> &b)
{
    return a[1]>b[1];
}
int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    sort(jobs.begin(),jobs.end(),compare);
    vector<int> v(3000);
    for(int i=3000;i>0;i--)
        v[3000-i]=i;
    int ans=0;
    for(int i=0;i<jobs.size();i++)
    {
        auto it=lower_bound(v.begin(),v.end(),jobs[i][0],greater<int>());
        if(it!=v.end())
        {   ans+=jobs[i][1];
            v.erase(it);
        }
    }
    return ans;
}
