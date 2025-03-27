#include <stdio.h>
int main()
{
    int n;      scanf("%d",&n);
    int i,c=0,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            c++;
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(int d=i+1;d<n;d++)
        {
            if(a[i]==0)
            {
                a[i]=a[d];
            }
        }
        d--;
    }
    for(i=1;i<=c;i++)
    {
        a[n-i]=0;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}