// string liberary functions

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100];
    printf("enter string: \n");
    gets(s1);
    strupr(s1);
    printf("upper case = %s\n", s1);
    strlwr(s1);
    printf("lower case = %s\n", s1);
    int len = strlen(s1);
    printf("length = %d\n", len); // for this use <string.h>
    char copy[100];
    strcpy(copy, s1);
    printf("copied string = %s", copy);
    strrev(s1);
    printf("reversed string = %s\n", s1);
    char fn[30] = "prince", ln[43] = "wadhwa";
    strcat(fn, ln); // joining the strings
    printf("full name = %s\n", fn);
    char pwd[20], rep[20];
    printf("enter password: \n");
    gets(pwd);
    printf("enter verify password: \n");
    gets(rep);
    int resp = strcmp(pwd, rep);
    if (resp == 0)
        printf("same");
    else
        printf("not same");
    return 0;
}