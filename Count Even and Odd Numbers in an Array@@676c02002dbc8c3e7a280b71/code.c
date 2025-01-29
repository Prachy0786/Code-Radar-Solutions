#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    int c=0,d=0;
    for(i=0;i<n;i=i+1)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            c=c+1;
        }
        else
        {
            d=d+1;
        }
    }
    printf("%d %d",c,d);
    return 0;
}