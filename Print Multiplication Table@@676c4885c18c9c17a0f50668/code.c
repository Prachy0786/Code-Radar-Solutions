#include <stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    int i;
    for(i=1;i<=10;i=i+1)
    {
        printf("%d * %d = %d",a,i,a*i);
    }
    return 0;
}