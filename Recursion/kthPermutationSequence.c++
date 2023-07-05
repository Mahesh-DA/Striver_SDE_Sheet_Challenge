string kthPermutation(int n, int k) {
    // Write your code here.
    vector<int> fac(n);
    vector<char> v(n);
    for(int i=1;i<=n;i++)
        v[i-1]='0'+i;
    fac[0]=1;
    for(int i=1;i<n;i++)
        fac[i]=fac[i-1]*i;
    for(int i=0;i<n;i++)
    {
        int j=((k-1)/fac[n-i-1]);
        k-=(fac[n-i-1]*j);
        j+=i;
        while(j>i)
        {
            char t=v[j];
            v[j]=v[j-1];
            v[--j]=t;
        }
    }
    string ans="";
    for(auto x:v)
        ans+=x;
    return ans;
}
