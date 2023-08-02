void solve(int r,int c,int n,vector<vector<int>> &mat,string s,vector<string> &ans,vector<vector<int>> &vis)
{   
    if(r==n-1 && c==n-1 && mat[r][c])
    {   
        ans.push_back(s);
        return;
    }
    if(r==n || c==n || r<0 || c<0 || !mat[r][c] || vis[r][c]) return;
    vis[r][c]=1;
    if(s[s.size()-1]!='U')
        solve(r+1,c,n,mat,s+'D',ans,vis);
    if(s[s.size()-1]!='L')
        solve(r,c+1,n,mat,s+'R',ans,vis);
    if(s[s.size()-1]!='D')
        solve(r-1,c,n,mat,s+'U',ans,vis);
    if(s[s.size()-1]!='R')
        solve(r,c-1,n,mat,s+'L',ans,vis);
    vis[r][c]=0;
}
vector<string> ratMaze(vector<vector<int>> &mat) {
    // Write your code here.
    vector<string>ans;
    vector<vector<int>> vis(mat.size(),vector<int>(mat.size()));
    solve(0,0,mat.size(),mat,"",ans,vis);
    return ans;
}
