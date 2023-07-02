void sm(vector<int> &nums,int n,int sum,vector<int> &ans)
{
	if(n<0)
	{	ans.push_back(sum);
		return;
	}	
	sm(nums,n-1,sum+nums[n],ans);
	sm(nums,n-1,sum,ans);
}
vector<int> subsetSum(vector<int> &num){
	// Write your code here.	
	vector<int> ans;
	sm(num,num.size()-1,0,ans);
	sort(ans.begin(),ans.end());
	return ans;
}
