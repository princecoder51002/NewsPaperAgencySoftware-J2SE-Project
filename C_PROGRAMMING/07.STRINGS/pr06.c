// write a program for converting the string from upper to lower and lower to upper case without using liberary function

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
            s[i] = s[i] + 32;
        else if (s[i] >= 97 && s[i] <= 122)
            s[i] = s[i] - 32;
    }
    printf("%s", s);
    return 0;
}