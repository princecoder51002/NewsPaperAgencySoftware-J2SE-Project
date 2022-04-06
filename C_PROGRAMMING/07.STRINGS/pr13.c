// write a program for a function to reverse a string

#include <stdio.h>
void reversemystring(char *s)
{
    int l, i, j;
    for (l = 0; s[l] != '\0'; l++)
        ;
    j = l - 1;
    for (i = 0; i < l / 2; i++)
    {
        char ch = s[i];
        s[i] = s[j];
        s[j--] = ch;
    }
}
int main()
{
    char s[40];
    gets(s);
    void reversemystring(char *s);
    reversemystring(s); // base address passed array as arguement
    printf("%s", s);

    return 0;
}