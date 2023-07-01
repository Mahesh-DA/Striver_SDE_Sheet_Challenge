int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    int cur=0,ans=0;
    map<int,int> a,d;
    for(int i=0;i<n;i++)
    {
        a[at[i]]++;
        d[dt[i]]++;
    }

    for(int i=0;i<2400;i++)
    {   cur+=a[i];
        ans=max(ans,cur);
        cur-=d[i];
    }
    return ans;
}
