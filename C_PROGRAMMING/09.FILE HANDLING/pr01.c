// basic program for input of file

#include <stdio.h>

int main()
{
    struct FILE *fp;
    char filename[30], str[100];
    printf("enter file name: \n");
    gets(filename);
    fp = fopen(filename, "a");
    fp = fopen(filename, "a");
    fprintf(fp, "real java\n");
    fprintf(fp, "online.com\n");
    fclose(fp);
    printf("writting in file-----");
    // ---------READING-------
    fp = fopen(filename, "r");
    while (!feof(fp))
    {
        char ch = fgetc(fp);
        printf("%c", ch);
    }
    fclose(fp);

    return 0;
}