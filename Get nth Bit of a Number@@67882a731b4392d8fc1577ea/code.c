#include <stdio.h>
int main() 
{
    int a,b;
    scanf("%d %d",&a,&b);
    int x = 1<<(b+1);
    int y = a | x;
    if(y%2==0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}