// Your code here...
#include <stdio.h>
int main()
{
    int n;     scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int d,c=0;
    for(d=0;d<n;d++)
    {
        for(i=d+1;i<n-1;i++)
        {
            if(c<(a[d]*a[i]))
            {
                c=a[i]*a[d];
            }
        }
    }
    printf("%d",c);
}