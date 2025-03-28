#include <stdio.h>
int main()
{
    int n;      scanf("%d",&n);
    int i;      int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int d;
    for(d=0;d<n-1;d++)
    {
        for(i=d+1;i<n;i++)
        {
            if(a[d]<a[i])
            {
                a[d]=a[i];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}