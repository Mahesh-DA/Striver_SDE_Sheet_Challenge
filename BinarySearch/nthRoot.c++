int NthRoot(int n, int m) {
  int l=1,r=m;
  if(n>1) r=sqrt(m);
  while(l<=r)
  {
    int mid=(l+(r-l)/2);
    if(pow(mid,n) >= INT_MAX) 
    { r=mid-1;
      continue;
    }
    int x=pow(mid,n);
    //cout<<x<<" "<<mid<<endl;
    if(x==m) return mid;
    else if(x<m) l=mid+1;
    else r=mid-1;
  }
  return -1;
}
