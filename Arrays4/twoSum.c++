#include <bits/stdc++.h>
// return all pairs with sum S
vector<vector<int>> pairSum(vector<int> &arr, int s){
   unordered_map<int,int> m;
   vector<vector<int>> ans;
   for(int i=0;i<arr.size();i++)
   {  int x=s-arr[i];
      if(m[x])
      {
         for(int j=0;j<m[x];j++)
            ans.push_back({min(arr[i],s-arr[i]),max(arr[i],s-arr[i])});
      }
      m[arr[i]]+=1;
   }
   sort(ans.begin(),ans.end());
   return ans;
}
