#include <stdio.h>
int main()
{
    float a,b,c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    float avg = (a+b+c)/3;
    printf("Average: %f", avg);
    return 0;
}