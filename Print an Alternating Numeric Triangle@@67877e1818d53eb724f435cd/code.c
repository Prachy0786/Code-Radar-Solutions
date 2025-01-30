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
           if(i%2==0)
           {
            if(j%2==0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
           }
           else
           {
            if(j%2==0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
           }
        }
        printf("\n");
    }
    return 0;
}