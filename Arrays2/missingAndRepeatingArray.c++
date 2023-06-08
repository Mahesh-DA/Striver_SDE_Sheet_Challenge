#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{	int x=arr[0],sm=0,i;
	for(i=0;i<n;i++)
	{	
		x=abs(arr[i]);
		sm+=x;
		if(arr[x-1]>0)
			arr[x-1]=-arr[x-1];
		else
			break;
	}
	for(i++;i<n;i++) sm+=abs(arr[i]);
	return {((n*(n+1))/2)+x-sm,x};

	//we can also solve using sum of squares and sum of numbers.
}
