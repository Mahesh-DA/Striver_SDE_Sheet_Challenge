#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long int mx=0,cur=0;
    for(int i=0;i<n;i++)
    {
        mx=max(mx,cur+arr[i]);
        cur=max(0ll,cur+arr[i]);
    }
    mx=max(mx,cur);
    return mx;
}
