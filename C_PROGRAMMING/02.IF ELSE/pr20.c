// write a program to choose greatest of numbers choosen by choice(switch case question)

#include <stdio.h>

int main()
{
    int choice;
    float a, b, c;
    printf("enter choice(2,3): \n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 2:
        printf("enter the value of a and b: \n");
        scanf("%f%f", &a, &b);
        if (a > b)
            printf("%f", &a);
        else
            printf("%f", &b);
        break;

    case 3:
        printf("enter the value of a and b and c: \n");
        scanf("%f%f%f", &a, &b, &c);
        if (a > b && a > c)
            printf("%f", a);
        else if (b > a && b > c)
            printf("%f", b);
        else
            printf("%f", c);
        break;

    default:
        printf("wrong choice");
    }
    return 0;
}