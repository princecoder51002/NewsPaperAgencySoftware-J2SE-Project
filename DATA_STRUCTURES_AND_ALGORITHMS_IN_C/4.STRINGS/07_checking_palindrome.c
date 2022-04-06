#include <stdio.h>

int main()
{
    int i, l = 0, prince;
    char a[30];
    printf("enter string: \n");
    gets(a);
    for (i = 0; a[i] != '\0'; i++)
    {
        l++;
    }
    for (i = 0; i < l / 2; i++)
    {
        if (a[i] != a[l - 1])
        {
            printf("not a palindrome");
            prince = 1;
            break;
        }
        else
            prince = 0;
        l--;
    }
    if (prince == 0)
        printf("it is palindrome");

    return 0;
}