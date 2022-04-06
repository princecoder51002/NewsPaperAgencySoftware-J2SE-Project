// write a program to replace all digits of a string with *

#include <stdio.h>

int main()
{
    int i;
    char s[40];
    printf("enter string: \n");
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
        {
            s[i] = '*';
        }
    }
    puts(s);
    return 0;
}