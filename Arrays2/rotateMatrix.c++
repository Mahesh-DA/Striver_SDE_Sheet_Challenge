#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    //rotate only one cell
    int a=0,b=0;
    int r=(n-1)/2,c=(m-1)/2;
    while(a<=r && b<=c)
    {   //cout<<"a,b "<<a<<" "<<b<<endl;
        int i=a,j=b,x=mat[a][b],f=0;
        if(m-(j*2)>1 && n-(i*2)>1)
        {   //cout<<i<<" "<<j<<" "<<x<<endl;
            j++;
            
            while(j<m-b)
            {  // cout<<i<<" "<<j<<" "<<endl;
                int t=mat[i][j];
                mat[i][j]=x;
                x=t;
                j++;
            }
            j--;    
            i++;
            while(i<n-a)
            {   //cout<<i<<" "<<j<<endl;
                int t=mat[i][j];
                mat[i][j]=x;
                x=t;
                i++;
            }
         
            i--;
            j--;
            while(j>=b)
            {   //cout<<i<<" "<<j<<endl;
                int t=mat[i][j];
                mat[i][j]=x;
                x=t;
                j--;
            }
            
            i--;
            j++;
            while(i>a)
            {   //cout<<i<<" "<<j<<endl;
                int t=mat[i][j];
                mat[i][j]=x;
                x=t;
                i--;
            }
        }
        // cout<<x<<" "<<a<<" "<<b<<endl;
        mat[a][b]=x;
        a++,b++;
    }
}
