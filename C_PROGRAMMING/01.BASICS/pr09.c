// input time in minutes and convert it into valid hours and minutes

#include <stdio.h>

int main()
{
    int m, h, mins;
    printf("enter mins: \n");
    scanf("%d", &mins);
    h = mins / 60;
    m = mins % 60;
    printf("h:%d m:%d", h, m);
    return 0;
}