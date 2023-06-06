#include <bits/stdc++.h>
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    int c=permutation[n-1],i;
    for(i=n-2;i>=0;i--)
    {
        if(permutation[i]<permutation[i+1])
        {
            break;        
        }
    }
    // cout<<i<<" "<<permutation[i]<<endl;
    sort(permutation.begin()+i+1,permutation.end());
    if(i!=-1)
    {
        int x=lower_bound(permutation.begin()+i+1,permutation.end(),permutation[i])-permutation.begin();
        // cout<<x<<" "<<permutation[x+1]<<endl;
        int a=permutation[i];
        permutation[i]=permutation[x];
        permutation[x]=a;
    }
    return permutation;
}
