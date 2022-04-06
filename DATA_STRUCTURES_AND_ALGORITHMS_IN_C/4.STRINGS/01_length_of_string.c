#include <stdio.h>

int main()
{
    int i, l = 0;
    char name[30];
    printf("enter your name : \n");
    gets(name);
    for (i = 0; name[i] != '\0'; i++)
    {
        l++;
    }
    printf("length of string : %d", l);
    return 0;
}