#include <stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    int i,j,k,s=a-1;
    for(i=1;i<=a;i=i+1)
    {
        for(k=1;k<=s;k=k+1)
        {
            printf(" ");
        }
        for(j=1;j<=i;j=j+1)
        {
            printf("%d",j);
          
        }
        s=s-1;
        printf("\n");
    }    
    return 0;
}