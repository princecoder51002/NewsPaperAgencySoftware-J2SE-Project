#include <stdio.h>

int main()
{
    int i, v = 0;
    char name[30];
    printf("enter your name: \n");
    gets(name);
    for (i = 0; name[i] != '\0'; i++)
    {
        switch (name[i])
        {
        case 'a':
        case 'i':
        case 'u':
        case 'o':
        case 'e':
        case 'E':
        case 'A':
        case 'I':
        case 'O':
        case 'U':
            v++;
            break;
        }
    }
    printf("\nvowels: %d", v);
    return 0;
}