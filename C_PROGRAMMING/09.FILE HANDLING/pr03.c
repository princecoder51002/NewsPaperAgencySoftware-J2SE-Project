// write a program to copy a file

#include <stdio.h>

int main()
{
    struct FILE *sfp, *dfp;
    char src[30], des[40];
    printf("enter source file name: \n");
    gets(src);
    printf("enter destination file name: \n");
    gets(des);
    sfp = fopen(src, "r");
    if (sfp == 0)
    {
        printf("file not found");
    }
    else
    {
        dfp = fopen(des, "w");
        while (!feof(sfp))
        {
            char ch = fgetc(sfp);
            putchar(ch);
            fputc(ch, dfp);
            printf("%c", ch);
        }
        printf("file copied");
        fclose(sfp);
        fclose(dfp);
    }
    return 0;
}