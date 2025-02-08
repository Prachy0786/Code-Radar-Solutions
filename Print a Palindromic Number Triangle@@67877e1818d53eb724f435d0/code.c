#include <stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    int i,j,k,a;
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
        for(a=i-1;a>=1;a=a-1)
        {
            printf("%d",a);
        }
        printf("\n");
        s=s-1;
    }
    return 0;
}