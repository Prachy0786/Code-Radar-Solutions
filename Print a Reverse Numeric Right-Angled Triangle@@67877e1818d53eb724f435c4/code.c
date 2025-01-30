#include <stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    int i,j;
    for(i=a;i>=1;i=i-1)
    {
        for(j=1;j<=i;j=j+1)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}