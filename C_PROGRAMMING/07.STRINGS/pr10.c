// write a program for this output
// enter image filing: image.txt
// what is this!!
// enter image filing: image.jpg
// good job

#include <stdio.h>

int main()
{
    int i, l;
    char pic[30];
    printf("enter image filing: \n");
    gets(pic);
    for (l = 0; pic[l] != '\0'; l++)
        ;
    if (pic[l - 1] == 'g' && pic[l - 2] == 'p' && pic[l - 3] == 'j')
        printf("good job");
    else
        printf("what is this!!");
    return 0;
}