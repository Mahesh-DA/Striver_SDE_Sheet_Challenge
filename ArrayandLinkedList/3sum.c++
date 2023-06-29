#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	
	vector<vector<int>> ans;
	sort(arr.begin(),arr.end());
	for(int i=0;i<n-2;i++)
	{
		if(i==0 || arr[i]!=arr[i-1])
		{
			int low=i+1,high=n-1;
			while(low<high)
			{	int sm=arr[i]+arr[low]+arr[high];
				if(sm==K)
					ans.push_back({arr[i],arr[low],arr[high]});
				if(sm<=K)
				{	low++;
					while(low<high && arr[low]==arr[low-1]) low++;
				}
				if(sm>=K)
				{	high--;
					while(high>low && arr[high]==arr[high+1]) high--;
				}
			}
		}
	}
	return ans;
}
