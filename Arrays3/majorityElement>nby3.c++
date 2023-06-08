#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n=arr.size();
	int a=arr[0],ac=1,b=-1,bc=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]==a)
			ac++;
        else if(arr[i]==b)
            bc++;
		else
		{   
            if(ac==0)
                a=arr[i],ac=1;
            else if(bc==0)
                b=arr[i],bc=1;
            else
            {
                ac--;
                bc--;

            }
		}
	}
	ac=0,bc=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==a)
			ac++;
        else if(arr[i]==b)
            bc++;
	}
    //cout<<a<<" "<<ac<<" "<<b<<" "<<bc<<endl;
    vector<int> ans;
	if(ac>n/3)
        ans.push_back(a);
    if(bc>n/3)
        ans.push_back(b);
	return ans;
}
