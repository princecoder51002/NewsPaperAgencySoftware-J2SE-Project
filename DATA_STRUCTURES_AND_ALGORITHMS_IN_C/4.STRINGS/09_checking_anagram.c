#include <stdio.h>

int main()
{
    int i;
    char a[30], b[30];
    printf("enter string A: \n");
    gets(a);
    printf("enter string B: \n");
    gets(b);
    int h[52];
    for (i = 0; i < 52; i++)
        h[i] = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 97 && a[i] <= 122)
            h[a[i] - 97]++;
        else if (a[i] >= 65 && a[i] <= 90)
            h[a[i] - 65 + 26]++;
    }
    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] >= 97 && b[i] <= 122)
        {
            h[b[i] - 97]--;
            if (h[b[i] - 97] < 0)
            {
                printf("not anagram\n");
                break;
            }
        }
        else if (b[i] >= 65 && b[i] <= 90)
        {
            h[b[i] - 65 + 26]--;
            if (h[b[i] - 65 + 26] < 0)
            {
                printf("not anagram\n");
                break;
            }
        }
    }
    if (b[i] == '\0')
        printf("its anagram");
    return 0;
}