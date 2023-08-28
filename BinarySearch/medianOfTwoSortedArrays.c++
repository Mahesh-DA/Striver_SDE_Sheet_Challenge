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

//Best Approach
double median(vector<int>& a, vector<int>& b) {
	// Write your code here.
	int n=(a.size()+b.size()+1)/2;
	if(a.size()>b.size()) swap(a,b);
	int l=0,r=a.size()-1;
	while(l<=r)
	{	int ma=(l+r)/2,mb;
		mb=n-ma-2;
		if(l==a.size()-1)
		{
			if((a.size()+b.size())%2)
			{
				return max(a[l],b[mb]);
			}else
			{
				return (max(a[l],b[mb])+b[mb+1])/2;
			}
		}
		
		//cout<<ma<<" "<<mb<<endl;
		if(mb<0)
		{
			if(a[ma]<b[0])
			{
				if(a.size()+b.size()%2)
					return a[ma];
				else
					return (a[ma]+b[0])/2;
			}
			else
			{
				if(b.size()%2)
					return b[b.size()/2];
				else
					return (double)(b[b.size()/2]+b[(b.size()/2)+1])/2;
			}
		}else
		{	//cout<<a[ma]<<" "<<b[mb+1]<<" "<<b[mb]<<" "<<a[ma+1]<<endl;
			if(a[ma]<=b[mb+1] && b[mb]<=a[ma+1])
			{	
				if((a.size()+b.size())%2)
				{
					return max(a[ma],b[mb]);
				}
				else
				{	//cout<<(max(a[ma],b[mb]))<<" "<<min(a[ma+1],b[mb+1])<<endl;
					return (double)(max(a[ma],b[mb])+min(a[ma+1],b[mb+1]))/2;
				}
			}
			else if(a[ma]<=b[mb+1])
			{
				l=ma+1;
			}
			else
			{
				r=ma-1;
			}
		}
	}
	if(a.size()%2)
		return a[(a.size()/2)];
	else
		return (double)(a[a.size()/2]+a[(a.size()/2)+1])/2;
}
