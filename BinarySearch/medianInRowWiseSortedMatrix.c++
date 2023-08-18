int median(vector<vector<int>> &matrix, int m, int n) {
    // Write your code here.
    int mn=matrix[0][0],mx=matrix[0][n-1];
    for(int i=1;i<m;i++)
    {
        mn=min(mn,matrix[i][0]);
        mx=max(mx,matrix[i][n-1]);
    }
    int hf=((m*n)/2)+1;
    while(mn<mx)
    {
        int md=(mn+mx)/2,i=0,ct=0;
        while(i<m)
        {   ct+=(upper_bound(matrix[i].begin(),matrix[i].end(),md)-matrix[i].begin());
            i++;
        }
        if(ct<hf)
            mn=md+1;
        else
        {
            mx=md;
        }
    }
    return mn;
}
