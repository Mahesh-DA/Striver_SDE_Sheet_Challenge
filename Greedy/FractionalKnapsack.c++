#include <bits/stdc++.h> 
bool compare(const pair<int,int> a,const pair<int,int> b)
{
    return ((double)a.second/a.first)>((double)b.second/b.first);
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    // vector<pair<double,int>> ratio(n);
    // for(int i=0;i<n;i++)
    //     ratio[i]={(double)items[i].second/items[i].first,i};
    // sort(ratio.begin(),ratio.end(),greater<pair<double,int>>());
    sort(items.begin(),items.end(),compare);
    double ans=0;
    for(int item=0;item<n;item++)
    {   
        if(items[item].first>w)
        {
            ans+=((double)w/(items[item].first))*(items[item].second);
            break;
        }
        ans+=items[item].second;
        w-=items[item].first;
    }
    return ans;
}
