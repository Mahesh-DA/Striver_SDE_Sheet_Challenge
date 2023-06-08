#include <bits/stdc++.h> 
int con(int l,int m,int r,long long *arr)
{
    int temp[r-l+1],i=l,b=m+1,ans=0,k=0;
    while(i<=m && b<=r)
    {
        if(arr[i]>arr[b])
        {
            ans+=(m-i+1);
            temp[k++]=arr[b++];
        }
        else
            temp[k++]=arr[i++];
    }
    while(i<=m)
    {
        temp[k++]=arr[i++];
    }
    while(b<=r)
    {
        temp[k++]=arr[b++];
    }
    while(k>0)
    {
        arr[l+k-1]=temp[k-1];
        k--;
    }
    return ans;
}
int div(int l,int r,long long *arr)
{   int a=0,b=0,c=0;
    if(r>l)
    {
        a=div(l,(r+l)/2,arr);
        b=div((r+l)/2+1,r,arr);
        c=con(l,(r+l)/2,r,arr);
    }
    return a+b+c;
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    return div(0,n-1,arr);
}
