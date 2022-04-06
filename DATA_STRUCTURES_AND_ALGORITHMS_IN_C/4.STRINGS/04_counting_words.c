#include <stdio.h>

int main()
{
    int i, v = 1;
    char name[30];
    printf("enter string: \n");
    gets(name);
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ' && name[i + 1] != ' ')
            v++;
    }
    printf("number of words:%d", v);
    return 0;
}