#include <stdio.h>
int main()
{
    int n;          scanf("%d",&n);
    int i,a[i];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2!=0)
    {
        printf("%d",a[(n/2)+1]);
    }
}