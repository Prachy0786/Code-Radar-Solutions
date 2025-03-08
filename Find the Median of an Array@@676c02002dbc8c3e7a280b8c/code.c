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
        int c=n/2 +1;
        printf("%d",a[c]);
    }
}