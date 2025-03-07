// Your code here...
int kthSmallest(int* a , int n ,int k)
{
    int i;int c=0;
    int d;
    for(d=0;d<n;d=d+1)
    {
    for(i=0;i<n-1;i=i+1)
    {
        if(a[i]>a[i+1])
        {
            c=a[i+1];
            a[i+1]=a[i];
            a[i]=c;
        }
    }
    }
    if(k>=0 && k<=n)
    {
        return a[k];
    }
    else
    {
        return -1;
    }
}