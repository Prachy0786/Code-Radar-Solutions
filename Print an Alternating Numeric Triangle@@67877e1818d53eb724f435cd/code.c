#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,j,c=1;
    for(i=1;i<=a;i=i+1)
    {
        for(j=1;j<=i;j=j+1)
        {
           if(c%2==0)
           {
            printf("1 ");
           }
           else
           {
            printf("0 ");
           }
           c++;
        }
        printf("\n");
    }
    return 0;
}