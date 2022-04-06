// wrie a program toinput two strings and concate them without using library functions

#include <stdio.h>

int main()
{
    int i, j;
    char a[30], b[70];
    printf("enter string A: \n");
    gets(a);
    printf("enter string B: \n");
    gets(b);
    for (i = 0; a[i] != '\0'; i++);
    a[i] = ' ';
    i = i + 1;

    for (j = 0; b[j] != '\0'; j++)
    {
        a[i + j] = b[j];
    }
    a[i + j] = '\0';

    puts(a);

    return 0;
}