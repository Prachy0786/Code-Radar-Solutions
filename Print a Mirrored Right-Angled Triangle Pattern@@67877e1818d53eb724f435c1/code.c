#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,j,s=1;
    for(i=1;i<=a;i=i+1)
    {
        for(i=1;i<=s;i=i+1)
        {
            printf("\n");
        }
        for(j=1;j<=i;j=j+1)
        {
            printf("*");
        }
        printf("\n");
        s++;
    }
    return 0;
}