int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int l=-1,r=0,ans=0;
    while(r<n && k)
    {
        if(!arr[r])
            k--;
        r++;
    }
    while(r<n && arr[r]) r++;
    ans=r;
    while(r<n)
    {
        while(l<n && arr[++l]);
        while(r<n && arr[++r]);
        ans=max(ans,r-l-1);
    }
    return ans;
}
