#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
	vector<vector<long long int>> v(n);
	v[0].push_back(1);
	for(long long int i=1;i<n;i++)
	{
		v[i].push_back(1);
		for(long long int j=1;j<=i;j++)
		{	
			v[i].push_back((v[i][j-1]*(i+1-j))/j);
		}
	}
	return v;
}
