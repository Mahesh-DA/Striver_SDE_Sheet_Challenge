void sol(vector<int>& arr, int n, int k,int sm,vector<int> v,vector<vector<int>> &ans)
{
    if(n==arr.size())
    {
        if(sm==k)
        {   
            // reverse(v.begin(),v.end());
            ans.push_back(v);
        }
        return;
    }
    sol(arr,n+1,k,sm,v,ans);
    v.push_back(arr[n]);
    sol(arr,n+1,k,sm+arr[n],v,ans);
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> v;
    sol(arr,0,k,0,v,ans);
    return ans;
}
