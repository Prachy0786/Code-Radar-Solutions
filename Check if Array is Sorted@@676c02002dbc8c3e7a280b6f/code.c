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
    int c=0;
    for(i=0;i<n-1;i=i+1)
    {
        if(!(a[i]<=a[i+1]))
        {
            c=1;
        }
    }    
    if(c==0)
    {
        printf("Sorted");
    }
    else
    {
        printf("Not Sorted");
    }
    return 0;
}