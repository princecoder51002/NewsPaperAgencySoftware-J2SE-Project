// input a file name from user and count no. of letters , words and lines it contains

#include <stdio.h>

int main()
{
    struct FILE *fp;
    int count = 0, word = 1, line = 1;
    char filename[30];
    printf("enter file name: \n");
    gets(filename);
    fp = fopen(filename, "a");
    fprintf(fp, "real java\n");
    fprintf(fp, "prince");
    fclose(fp);
    fp = fopen(filename, "r");
    while (!feof(fp))
    {
        char ch = fgetc(fp);

        if (ch == ' ' || ch == '\n')
            word++;
        if (ch == '\n')
            line++;
        else
            count++;
    }

    printf("count : %d\n", count);
    printf("words : %d\n", word);
    printf("lines : %d", line);

    fclose(fp);

    return 0;
}