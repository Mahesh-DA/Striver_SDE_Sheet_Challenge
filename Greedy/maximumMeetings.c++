#include <bits/stdc++.h> 
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
    vector<vector<int>> v(start.size());
    for(int i=0;i<start.size();i++)
    {
        v[i]={end[i],i+1,start[i]};
    }
    sort(v.begin(),v.end());
    vector<int> ans={v[0][1]};
    int cur=v[0][0];
    for(int i=1;i<start.size();i++)
    {
        if(v[i][2]>cur)
        {
            ans.push_back(v[i][1]);
            cur=v[i][0];
        }
    }
    return ans;
}
