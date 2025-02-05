#include <stdio.h>
int main() 
{
    int a,b;
    scanf("%d %d",&a,&b);
    int x = 1<<b;
    printf("%d",a|x);
    return 0;
}