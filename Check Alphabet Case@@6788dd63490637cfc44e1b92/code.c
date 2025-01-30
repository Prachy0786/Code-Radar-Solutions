#include <stdio.h>
int main() 
{
    char a;
    getchar();
    scanf("%c",&a);
    int c=0;
    char y,k;
    for(y='A';y<='Z';y=y+1)
    {
        if(y==a)
        {
            c=1;
            break;
        }
    }    
    for(k='a';k<='z';k=k+1)
    {
        if(a==k)
        {
            c=2;
            break;
        }
    }
    if(c==1)
    {
        printf("Uppercase");

    }
    else
    {
        if(c==2)
        {
            printf("Lowercase");
        }
        else
        {
            printf("Not an alphabet");
        }
    }
    return 0;
}