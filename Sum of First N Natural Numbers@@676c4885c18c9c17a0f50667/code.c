#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i,c=0;
    for(i=1;i<=a;i=i+1)
    {
        c=c+i;
    }
    printf("%d",c);
    return 0;
}