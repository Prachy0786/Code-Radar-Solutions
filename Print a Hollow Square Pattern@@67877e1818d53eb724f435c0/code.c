#include <stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    int i,j;
    for(i=1;i<=a;i=i+1)
    {
        for(j=1;j<=a;j=j+1)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}