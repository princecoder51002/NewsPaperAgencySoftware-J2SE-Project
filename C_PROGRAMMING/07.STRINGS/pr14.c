//

#include <stdio.h>

int main()
{
    char list[5][20];
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        printf("enter the name of %d student: \n", i + 1);
        gets(list[i]);
    }
    printf("\nthe list of students: \n");
    for (i = 0; i < 5; i++)
    {
        puts(list[i]);
    }
    return 0;
}