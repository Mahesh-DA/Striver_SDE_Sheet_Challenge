#include <bits/stdc++.h> 
int fun(int l,int m,int r,vector<int> &arr)
{	int ans=0,i=m+1;
	while(l<=m && i<=r)
	{
		if(arr[l]>arr[i]*2)
			ans+=(m-l+1),i++;
		else
			l++;
	}
	return ans;
}
int con(int l,int m,int r,vector<int> &arr)
{	
	// cout<<l<<" "<<r<<" ";
	vector<int> v(r-l+1);
	int i=l,j=m+1,k=0,ans=fun(l,m,r,arr);
	while(i<=m && j<=r)
	{
		if(arr[i]<=arr[j])
			v[k++]=arr[i++];
		else
		{
			// ans+=(arr.begin()+m+1)-upper_bound(arr.begin()+i,arr.begin()+(m+1),arr[j]*2);
			v[k++]=arr[j++];
		}
	}
	while(i<=m)
	{
		v[k++]=arr[i++];
	}
	while(j<=r)
	{
		v[k++]=arr[j++];
	}
	while(k)
	{
		arr[r--]=v[--k];
	}
	// cout<<ans<<endl;
	return ans;
}
int div(int l,int r,vector<int> &arr)
{
	// cout<<"div "<<l<<" "<<r<<endl;
	if(l<r)
	{
		int m=(l+r)/2;
		return div(l,m,arr) + div(m+1,r,arr) + con(l,m,r,arr);
	}
	return 0;
}
int reversePairs(vector<int> &arr, int n){
	// Write your code here.
	return div(0,n-1,arr);
}
