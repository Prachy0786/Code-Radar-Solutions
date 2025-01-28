#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,j;
    for(i=0;i<a;i=i+1)
    {
        for(j=0;j<=i;j=j+1)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}