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
    for(i=0;i<n;i=i+1)
    {
        if(i==(k-1))
        {
            printf("%d",a[k-1]);
        }
        else
        {
            printf("-1");
        }
    }
    return 0;
}