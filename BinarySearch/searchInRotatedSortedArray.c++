int search(int* arr, int n, int key) {
    // Write your code here.
    int r=n-1,l=0;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(arr[m]==key) return m;
        if(key >arr[m])
        {
            if(arr[m]>arr[n-1] || (key<=arr[n-1]))
                l=m+1;
            else
                r=m-1;
        }
        else
        {
            if(arr[m]<arr[0] || (key>=arr[0]))
                r=m-1;
            else
                l=m+1;
        }
    }
    return -1;
}
