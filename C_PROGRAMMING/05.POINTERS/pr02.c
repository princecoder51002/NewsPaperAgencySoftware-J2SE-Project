// write a program for pointers to pointers

#include <stdio.h>

int main()
{
    int s = 7;
    int m = 8;
    int *h = &s;
    int **t;
    t = &h;
    // **t=&h;
    printf("\n s=%d", s);    // 7
    printf("\n t=%d", t);    // address of h
    printf("\n *t=%d", *t);  // value at address of h
    printf("\n**t=%d", **t); // 7(access)

    **t = 9;               // modification
    printf("*h=%d\n", *h); //9

    // we can perform only subtraction on 2 addresses no more arithmetic operator can be performed

    printf("%d", &s - &m);
    return 0;
}