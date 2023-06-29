int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int cur=0,i=1,x=arr[0];
	while(i<n)
	{
		if(x!=arr[i])
		{	
			arr[++cur]=arr[i];
			x=arr[i];
		}
		i++;
	}
	return cur+1;
}
