#include <stdio.h>

int main()
{
    int i, prince;
    char name[40];
    printf("enter string: \n");
    gets(name);
    for (i = 0; name[i] != '\0'; i++)
    {
        if (!(name[i] >= 65 && name[i] <= 90) && !(name[i] >= 97 && name[i] <= 122) && !(name[i] >= 48 && name[i] <= 57))
        {
            prince = 1;
            break;
        }
        else
            prince = 0;
    }
    if (prince == 0)
        printf("valid string");
    else
        printf("invalid string");
    return 0;
}