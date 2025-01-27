#include <stdio.h>
int main() 
{
    char name[20];
    int age;
    char hobby[50];
    scanf("%s",name);
    scanf("%d",&age);
    scanf("%s",hobby);
    printf("Name: %s\nAge: %d\nHobby: %s",name,age,hobby);
    return 0;
}