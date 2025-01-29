#include <stdio.h>
int main()
{
    float a,b;
    char c;
    get char();
    scanf("%f",&a);
    scanf("%f",&b);
    switch(c)
    {
        case '+' : printf("%d",a+b);
        break;
        case '-' : printf("%d",a-b);
        break;
        case '/' :
        if(b==0)
        {
            printf("error");
        }
        else
        {
            printf("%d",a/b);
        }
        break;
        case '*' : printf("%d",a*b);
        break;
        default  : printf("error");
    }
    return 0;
}