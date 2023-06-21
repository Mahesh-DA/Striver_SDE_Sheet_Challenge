#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  int n=arr.size(),ans=0;
  int pre=0;
  unordered_map<int,int> m;
  for(int i=1;i<=n;i++)
  {
    pre+=arr[i-1];
    
    if(!pre)
      ans=i;
    else if(m[pre])
      ans=max(ans,i-m[pre]);
    else
      m[pre]=i;
  }
  // for(int i=0;i<n;i++)
  // { int pre=0;
  //   for(int j=i;j<n;j++)
  //   {
  //     pre=pre+arr[j];
  //     if(!pre)
  //       ans=max(ans,j-i+1);
  //   }
  // }
  // N^2 time
  return ans;
}
