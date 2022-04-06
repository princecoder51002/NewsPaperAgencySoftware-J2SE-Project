// write a program to input a string and reverse its origional content

#include <stdio.h>

int main()
{
    int i, l = 0, temp;
    char a[20];
    printf("enter string A: \n");
    gets(a);
    for (i = 0; a[i] != '\0'; i++)
    {
        l++;
    }
    for (i = 0; i <= l / 2; i++)
    {
        temp = a[i];
        a[i] = a[l - 1];
        a[l - 1] = temp;
        l--;
    }
    puts(a);
    return 0;
}