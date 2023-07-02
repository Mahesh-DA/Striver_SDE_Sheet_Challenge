#include<bits/stdc++.h>
void rec(vector<int> &arr, int n, int target,vector<vector<int>> &ans,vector<int> cur)
{	if(target==0)
		ans.push_back(cur);
	if(n==arr.size() || target-arr[n]<0)
	{	
		return;
	}
	int j=n;
	while(j<arr.size() && arr[j]==arr[n])
	{
		cur.push_back(arr[n]);
		target-=arr[n];
		j++;
	}
	
	int k=1;
	while(n<j)
	{
		rec(arr,j,target,ans,cur);
		cur.pop_back();
		target+=arr[n++];
	}
	rec(arr,j,target,ans,cur);
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target){
	// Write your code here.
	sort(arr.begin(),arr.end());
	vector<vector<int>> ans;
	vector<int> cur;
	rec(arr,0,target,ans,cur);
	return ans;
}
