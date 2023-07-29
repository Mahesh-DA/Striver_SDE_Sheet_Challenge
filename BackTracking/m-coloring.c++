bool color(int r,int c,int n,vector<vector<int>> &mat, int m,vector<vector<int>> &v)
{   //cout<<r<<" "<<c<<" "<<n<<endl;
    if(r==n) return true;
    if(c==n) return color(r+1,r+2,n,mat,m,v);
    if(!mat[r][c]) return color(r,c+1,n,mat,m,v);
    for(int i=0;i<m;i++)
    {
        if(!v[r][i])
        {
            v[r][i]=1;
            v[c][i]=1;
            if(color(r,c+1,mat.size(),mat,m,v)) return 1;
            v[r][i]=0;
            v[c][i]=0;
        }
    }
    return 0;
}
string graphColoring(vector<vector<int>> &mat, int m) {
    // Write your code here
    vector<vector<int>> v(mat.size(),vector<int> (m));
    
    if(color(0,0,mat.size(),mat,m,v)) return "YES"; return "NO";
}
