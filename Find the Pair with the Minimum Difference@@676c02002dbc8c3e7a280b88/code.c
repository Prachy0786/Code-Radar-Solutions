// Your code here...
#include <stdio.h>
int main()
{
    int n;     scanf("%d",&n);
    int i,a[n],c=1000,j=0,e=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int d;
    for(d=0;d<n;d++)
    {
        for(i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                int k;
                k=a[i];
                a[i]=a[i+1];
                a[i+1]=k;
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]-a[i]<c)
        {
            c=a[i+1]-a[i];
            j=a[i+1];
            e=a[i];
        }
    }
    printf("%d %d",e,j);
}