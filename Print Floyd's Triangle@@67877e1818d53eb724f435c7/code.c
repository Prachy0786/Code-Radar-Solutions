#include <stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    int i,j,c=1;
    for(i=0;i<a;i=i+1)
    {
        for(j=0;j<=i;j=j+1)
        {
            printf("%d ",c);
            c++;
        }
    }     
    return 0;
}