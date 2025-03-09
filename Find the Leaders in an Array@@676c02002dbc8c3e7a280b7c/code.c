#include <stdio.h>
int main()
{
    int n;   scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int d,c=1;
    for(d=0;d<n;d++)
    {
        for(i=d+1;i<n;i++)
        {
            if(a[d]!>a[i])
            {
                c=0;
            }
        }
        if(c==1)
        {
            printf("%d ",a[d]);
        }
    }
    return 0;
}