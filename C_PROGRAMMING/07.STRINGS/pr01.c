// input a string and count capital and small case letters

#include <stdio.h>

int main()
{
    int i, v = 0, m = 0;
    char name[20];
    printf("enter your name: \n");
    gets(name);
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 65 && name[i] <= 90)
            v++;
        else if (name[i] >= 97 && name[i] <= 122)
            m++;
    }
    printf("capital letters : %d\n", v);
    printf("small letters : %d\n", m);
    return 0;
}