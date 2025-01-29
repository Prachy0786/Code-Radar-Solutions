#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,j;
    for(i=1;i<=a;i++)
    {
        for(j=65;j<=j+i-1;j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}