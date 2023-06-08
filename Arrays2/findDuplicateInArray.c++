#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	for(int i=0;i<n;i++)
	{
		int x=abs(arr[i]);
		if(arr[x]>0)
			arr[x]=-arr[x];
		else
			return x;
	}
	// to solve without modifying array we can use linkedlist cycle method with slow and fast pointers
}
