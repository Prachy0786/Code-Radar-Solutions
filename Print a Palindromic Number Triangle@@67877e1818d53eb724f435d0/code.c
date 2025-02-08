#include <stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    int i,j,k;
    int s=n-1;
    for(i=1;i<=n;i=i+1)
    {
        for(k=1;k<=s;k=k+1)
        {
            printf(" ");
        }
        for(j=1;j<=i;j=j+1)
        {
            printf("%d",j);
        }
        for(j=i+1;j<=n;j=j+1)
        {
            printf("%d",j);
        }
        printf("\n");
        s=s-1;
    }
    return 0;
}