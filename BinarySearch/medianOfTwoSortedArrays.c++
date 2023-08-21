double median(vector<int>& a, vector<int>& b) {
	// Write your code here.
	int mn=min(a[0],b[0]),mx=max(a[a.size()-1],b[b.size()-1]),n=(a.size()+b.size()+1)/2,ans=0,od=(a.size()+b.size())%2,flag=0;
	while(mn<mx)
	{	int md=(mx+mn)/2;
		int ct=upper_bound(a.begin(),a.end(),md)-a.begin() + upper_bound(b.begin(),b.end(),md)-b.begin();
		if(ct<n)
			mn=md+1;
		else
			mx=md;
	}
	ans=mn;
	int ct=upper_bound(a.begin(),a.end(),ans)-a.begin() + upper_bound(b.begin(),b.end(),ans)-b.begin();
	if(od || ct==n+1) return ans;
	int a1=*upper_bound(a.begin(),a.end(),ans);
	int a2=*upper_bound(b.begin(),b.end(),ans);
	ans+=min(a1,a2);
	return (double)ans/2;
}
