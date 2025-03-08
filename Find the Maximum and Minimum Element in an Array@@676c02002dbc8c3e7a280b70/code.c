#include <stdio.h>
int main()
{
    int n;    scanf("%d",&n);
    int c=0,d=100000;
    int i,a[n];
    for(i=0;i<n;i=i+1)
    {
        scanf("%d",a[i]);
        if(c<a[i])
        {
            c=a[i];
        }
        if(d>a[i])
        {
            d=a[i];
        }
    }
    printf("%d %d",c,d);
}
