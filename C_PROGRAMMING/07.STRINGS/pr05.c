// write a program for converting the string from upper case to lower case without using library functions

#include <stdio.h>

int main()
{
    int i;
    char s[30];
    printf("enter string: \n");
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] = s[i] + 32;
        }
    }
    printf("%s", s);
    return 0;
}