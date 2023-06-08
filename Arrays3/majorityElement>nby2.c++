#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	if(n==1)
		return arr[0];
	int a=arr[0],ac=1;
	for(int i=1;i<n;i++)
	{
		if(arr[i]==a)
			ac++;
		else
		{
			ac--;
			if(ac==0)
				a=arr[i],ac=1;
		}
	}
	ac=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==a)
			ac++;
	}
	if(ac>n/2)
		return a;
	else
		return -1;
	// unordered_map<int,int> m;
	// for(int i=0;i<n;i++)
	// 	m[arr[i]]++;
	// for(auto x:m)
	// {
	// 	if(x.second>n/2)
	// 		return x.first;
	// }
	// return -1;
}
