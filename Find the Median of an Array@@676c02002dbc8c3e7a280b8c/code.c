#include <stdio.h>
int main()
{
    int n;          scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2!=0)
    {
        int c=n/2;
        printf("%d",a[c]);
    }
    else
    {
        int c=n/2;
        printf("%d",(a[c]+a[c-1])/2);
    }
}