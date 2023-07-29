bool solve(int r,int c,int board[][9],vector<vector<int>> &rw,vector<vector<int>> &col,vector<vector<int>> &sq)
{   
    // cout<<r<<" "<<c<<endl;
    r+=(c/9);
    c%=9;
    if(r==9) return true;
    if(board[r][c]) return solve(r,c+1,board,rw,col,sq);
    for(int i=1;i<=9;i++)
    {   int x=((r/3)*3)+(c/3);
        // cout<<x<<" "<<i<<" "<<rw[r][i]<<" "<<col[c][i]<<" "<<sq[x][i]<<endl;
        if(!rw[r][i] && !col[c][i] && !sq[x][i]){
            rw[r][i]=1;
            col[c][i]=1;
            sq[x][i]=1;
            if(solve(r,c+1,board,rw,col,sq)) return true;
            rw[r][i]=0;
            col[c][i]=0;
            sq[x][i]=0;
        }
    }
    return false;
}
bool sudokuSolver(int board[][9]) {
    /* Don't write main().
     *  Don't read input, it is passed as function argument.
     *  Don't print output and return output as specified in the question
    */
    vector<vector<int>> r(9,vector<int> (10)),c(9,vector<int> (10)),sq(9,vector<int> (10));
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {   int x=((i/3)*3)+(j/3);
            if(board[i][j])
            {
                r[i][board[i][j]]=1;
                c[j][board[i][j]]=1;
                sq[x][board[i][j]]=1;
            }
        }
    }
    return solve(0,0,board,r,c,sq);
}
