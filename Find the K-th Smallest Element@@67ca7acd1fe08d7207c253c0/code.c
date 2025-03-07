// Your code here...
int kthSmallest(int* a , int n ,int k)
{
    int i;int c=0;
    for(i=0;i<n;i=i+1)
    {
        if(a[i]>a[i+1])
        {
                c=a[i];
                a[i]=a[i+1];
                a[i+1]=c;
        }
    }
        printf("%d",a[k]);
}