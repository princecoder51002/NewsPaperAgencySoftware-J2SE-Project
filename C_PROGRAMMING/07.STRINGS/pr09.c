// write a program for this output

// enter your fathers name : parshotam
// non sense
// enter your fathers name : sh parshotam
// good boy

#include <stdio.h>

int main()
{
    int i;
    char name[30];
    printf("enter your fathers name: \n");
    gets(name);
    if (name[0] == 's' && name[1] == 'h')
        printf("good boy");
    else
        printf("non sense");
    return 0;
}