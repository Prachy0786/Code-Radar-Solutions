#include <stdio.h>
int main() 
{
    int n; 
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i=i+1)
    {
        scanf("%d",&a[i]);
    }
    int k;      scanf("%d",&k);
    int d=0,f=0;
    for(i=0;i<n;i=i+1)
    {
        if(k==a[i])
        {
            d=i;
            f=1;
        }
    }
    if(f==1)
    {
        printf("%d",d);
    }
    else
    {
        printf("-1");
    }
    return 0;
}