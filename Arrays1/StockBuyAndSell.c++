#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int mx=0,cur=0;
    for(int i=1;i<prices.size();i++)
    {
        cur=max(0,cur+prices[i]-prices[i-1]);
        mx=max(mx,cur);
    }
    return mx;
}
