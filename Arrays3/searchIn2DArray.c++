bool searchMatrix(vector<vector<int>>& mat, int target) {
    int r=(mat.size()*mat[0].size())-1,l=0;
    while(l<=r)
    {
        int m=(l+r)/2;
        int x=mat[m/mat[0].size()][m%mat[0].size()];
        if(x==target)
            return true;
        else if(x<target)
            l=m+1;
        else
            r=m-1;
    }
    return false;
    // int r=mat.size(),c=mat[0].size(),i=0,j=r-1;
    // while(i<=j)
    // {
    //     int m=(j+i)/2;
    //     if(mat[m][c-1]==target)
    //         return true;
    //     else if(mat[m][c-1]<target)
    //         i=m+1;
    //     else
    //         j=m-1;
    // }
    // if(mat[j][c-1]<target)
    //     i=j;
    // j=0;
    // while(j<=c)
    // {
    //     int m=(j+c)/2;
    //     if(mat[i][m]==target)
    //         return true;
    //     else if(mat[i][m]<target)
    //         j=m+1;
    //     else
    //         c=m-1;
    // }
    // return false;
}
