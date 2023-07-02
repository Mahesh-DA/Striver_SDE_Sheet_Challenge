#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    // Write your code here
    vector<int> coins={1000,500,100,50,20,10,5,2,1};
    int ans=0,x=0;
    while(amount)
    {
        x=lower_bound(coins.begin()+x,coins.end(),amount,greater<int>())-coins.begin();
        ans+=(amount/coins[x]);
        amount%=coins[x];
    }
    return ans;
}
