#include <stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    int c = a%100;
    if( a%4==0 && a%100!=0 || a%400==0 )
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
    return 0;
}