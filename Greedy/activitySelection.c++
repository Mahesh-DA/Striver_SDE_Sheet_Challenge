#include<bits/stdc++.h>
int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    vector<pair<int,int>> v(start.size());
    for(int i=0;i<start.size();i++)
        v[i]={finish[i],start[i]};
    sort(v.begin(),v.end());
    int end=0,ans=0;
    for(auto x:v)
    {
        if(end<=x.second)
        {   ans++;
            end=x.first;
        }
    }
    return ans;
}
