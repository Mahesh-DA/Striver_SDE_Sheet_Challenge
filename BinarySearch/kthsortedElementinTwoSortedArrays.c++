int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int m, int n, int k) {
    // Write your code here.
    if(k==1) return min(row1[0],row2[0]);
    if(k==row1.size()+row2.size()) return max(row1[row1.size()-1],row2[row2.size()-1]);
    if(row1.size()>row2.size()) swap(row1,row2);
    int l=0,r=min(int(row1.size()),k)-1;
    while(l<=r)
    {
        int ma=(l+r)/2;
        int mb=k-ma-2;
        if(ma==row1.size()-1)
        {
            if(row1[ma]<=row2[mb+1])
            {
                return max(row1[ma],row2[mb]);
            }
            else
            {
                r=ma-1;
            }
        }
        else if(mb==row2.size()-1)
        {
            if(row2[mb]<=row1[ma+1])
            {
                return max(row1[ma],row2[mb]);
            }
            else
            {
                l=ma+1;
            }
        }
        else
        {
            if(row1[ma]<=row2[mb+1] && row2[mb]<=row1[ma+1])
            {
                return max(row1[ma],row2[mb]);
            }
            else if(row1[ma]<=row2[mb+1])
            {
                l=ma+1;
            }
            else
            {
                r=ma-1;
            }
        }
        if(r==-1)
        {
            return row2[mb+1];
        }
        else if(l==row1.size())
        {
            return row2[mb-1];
        }
    }
}
