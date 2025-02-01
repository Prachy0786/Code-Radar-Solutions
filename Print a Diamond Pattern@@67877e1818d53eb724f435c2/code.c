#include <stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    int i,j,k;
    for(i=1;i<=a;i=i+1)
    {
        for(k=1;k<=a-1;k=k+1)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j=j+1)
        {
            printf("*");
        }
        printf("\n")''
    }
    return 0;
}