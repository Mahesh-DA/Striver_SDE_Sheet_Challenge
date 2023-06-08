#include <bits/stdc++.h>
long long int rec(long long int x,long long int n,long long int m)
{	//cout<<x<<" "<<n<<endl;
	if(n<=3)
	{	long long int t=n%2?x:1;
		return (((x*x)%m)*t)%m;
	}
	long long int t=n%2?x:1;
	return (t*rec((x*x)%m,n/2,m))%m;
}
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	if(n==1)
		return x%m;
	return rec(1ll*x,1ll*n,1ll*m);
}
