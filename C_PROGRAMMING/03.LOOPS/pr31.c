// write a program for this output

// --> input : 154
// --> output : four five one

#include <stdio.h>

int main()
{
    int n, rev = 0, prince, r;
    printf("enter the value of n: \n");
    scanf("%d", &n); // 154
    prince = n;      // 154
    while (n != 0)
    {
        r = n % 10;
        switch (r)
        {
        case 0:
            printf("zero\n");
            break;
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three\n");
        case 4:
            printf("four\n");
            break;
        case 5:
            printf("five\n");
            break;
        case 6:
            printf("six\n");
            break;
        case 7:
            printf("seven\n");
            break;
        case 8:
            printf("eight\n");
            break;
        case 9:
            printf("nine\n");
            break;
        case 10:
            printf("ten\n");
            break;
        }
        n = n / 10;
    }

    return 0;
}