#include <stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    int n;
    int k=0;
    while(a>0)
    {
        n=a%10;
        k=k+n*10;
        a=a/10;
    }
    printf("%d",k);
    return 0;
}