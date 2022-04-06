// basic program for pointers

#include <stdio.h>

int main()
{
    int v = 5;
    int *p; // decleration of pointer variable
    p = &v;
    // *p=&v it can also be like this
    printf("v = %d\n", v);   //5
    printf("&v = %d\n", &v); // address of v
    printf("p = %d\n", p);   // address of v
    printf("*p = %d\n", *p); // value at the address of v

    *p = 9;                // modify or modification
    printf("v=%d\n", v);   //9
    printf("%d\n", *&*&v); //9
    printf("%d\n", *&*p);  //9

    return 0;
}