#include <stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    int i,a[n],c=0;
    for(i=0;i<n;i=i+1)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i=i+1)
    {
        if(a[i]>=a[i+1])
        {
            c=a[i];
            break;
        }
    }
    printf("%d",c);
    return 0;
}