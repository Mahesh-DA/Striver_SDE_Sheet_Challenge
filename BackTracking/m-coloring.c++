bool solve(int r,int n,int m,vector<vector<int>> &mat,vector<int> &clr,vector<int> &node)
{
    if(r==n) return true;
    if(!clr[r])
    {
        for(int i=1;i<=m;i++)
        {   if(node[i] && mat[r][node[i]]) continue;
            clr[r]=i;
            node[i]=r;
            if(solve(r,n,m,mat,clr,node)) return true;
            clr[r]=0;
            node[i]=0;
        }
        return false;
    }
    for(int i=0;i<n;i++)
    {
        if(mat[r][i])
        {
            if(clr[r]==clr[i]) return false;
        }
    }
    return solve(r+1,n,m,mat,clr,node);
}
string graphColoring(vector<vector<int>> &mat, int m) {
    // Write your code here
    vector<int> clr(mat.size()),node(m);
    if (solve(0,mat.size(),m,mat,clr,node)) 
        return "YES"; 
    return "NO";
}
