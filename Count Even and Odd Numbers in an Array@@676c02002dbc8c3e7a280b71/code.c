#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i=i+1)
    {
        scanf("%d",&a[i]);
        printf("%d",&a[i]);
    }
    return 0;
}