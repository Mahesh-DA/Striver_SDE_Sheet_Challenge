int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	int l=0,r=arr.size()-1;
	while(l<r)
	{
		int m=(l+r)/2;
		if(arr[m]==arr[m+1])
		{
			if((m-l)%2)
				r=m-1;
			else
				l=m+2;
		}
		else if(arr[m]==arr[m-1])
		{
			if((r-m)%2)
				l=m+1;
			else
				r=m-2;
		}
		else
			return arr[m];
	}
	return arr[l];
}
