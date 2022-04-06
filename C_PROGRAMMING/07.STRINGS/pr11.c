// write a program to input multiple words from user in a string then calculate them

#include <stdio.h>

int main()
{
    int i, v = 0;
    char name[70];
    printf("enter string: \n");
    gets(name);
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ' && name[i + 1] != ' ')
            v++;
    }
    printf("%d", v + 1);
    return 0;
}