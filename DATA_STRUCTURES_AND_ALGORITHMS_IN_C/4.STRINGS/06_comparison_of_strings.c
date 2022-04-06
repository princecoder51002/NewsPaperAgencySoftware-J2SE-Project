#include <stdio.h>

int main()
{
    int i, j;
    char a[30], b[30];
    printf("enter string A: \n");
    gets(a);
    printf("enter string B: \n");
    gets(b);
    for (i = 0, j = 0; a[i] != '\0' && b[j] != '\0'; i++, j++)
    {
        if (a[i] != b[j])
        {
            printf("strings does not match\n");
            break;
        }
    }
    if (a[i] == b[j])
        printf("equal\n");
    else if (a[i] < b[j])
        printf("string A comes first in dictionary");
    else if (a[i] > b[j])
        printf("string B comes first in dictionary");
    return 0;
}