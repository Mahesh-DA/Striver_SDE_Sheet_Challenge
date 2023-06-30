#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    // Write your code here.;
    long ans=0;
    int l=0,r=n-1,i=1,j=n-2;
    while(i<=j)
    {
        if(arr[l]<=arr[r])
        {
            if(arr[l]<arr[i])
                l=i;
            else
                ans+=arr[l]-arr[i];
            i++;
        }
        else
        {
            if(arr[r]<arr[j])
                r=j;
            else
                ans+=arr[r]-arr[j];
            j--;
        }
    }
    return ans;
}
