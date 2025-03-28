#include <stdio.h>
int main()
{
    int n;      scanf("%d",&n);
    int i;      int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            a[i]=a[i+1];
            a[i+1]=0;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}