// input a string and copy it to another string

#include <stdio.h>

int main()
{
    int i;
    char name[20], prince[50];
    printf("enter your name : \n");
    gets(name);
    for (i = 0; name[i] != '\0'; i++)
    {
        prince[i] = name[i];
    }
    prince[i] = '\0';
    printf("%s", prince);

    return 0;
}