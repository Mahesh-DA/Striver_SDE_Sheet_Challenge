#include <bits/stdc++.h> 

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> ans={intervals[0]};
    int k=0;
    for(int i=1;i<intervals.size();i++)
    {
        if(intervals[i][0]<=ans[k][1])
            ans[k][1]=max(ans[k][1],intervals[i][1]);
        else
            ans.push_back(intervals[i]),k++;
    }
    return ans;
}
