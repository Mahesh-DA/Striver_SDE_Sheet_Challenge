#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix) {
    // Write your code here.
    int f = 0, n = matrix.size();
    int m = matrix[0].size();
    for (int i = 0; i < n; i++)
    {   if (!matrix[i][0])
            f = 1;
    }
    for(int i=0;i<m;i++)
    {
        if (!matrix[0][i])
        {
            matrix[0][0] = 0;
            break;
        }
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(!matrix[i][j])
            {
                matrix[0][j]=0;
                matrix[i][0]=0;
            }
        }
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(!matrix[0][j] || !matrix[i][0])
                matrix[i][j]=0;
        }
    }
    if(!matrix[0][0])
    {
        for(int i=1;i<m;i++)
        {
            matrix[0][i]=0;
        }
    }
    if(f)
    {
        for(int i=0;i<n;i++)
        {
            matrix[i][0]=0;
        }
    }
}
