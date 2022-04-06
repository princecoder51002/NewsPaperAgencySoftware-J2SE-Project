// write a program for calculator for +,-,/,*

#include <stdio.h>

int main()
{
    float a, b;
    char choice;
    printf("enter choice(+,*,/,*)\n");
    scanf("%c", &choice);
    switch (choice)
    {
    case '+':
        printf("enter the value of a and b: \n");
        scanf("%f%f", &a, &b);
        printf("%f+%f=%f", a, b, a + b);
        break;
    case '-':
        printf("enter the value of a and b: \n");
        scanf("%f%f", &a, &b);
        printf("%f-%f=%f", a, b, a - b);
        break;
    case '/':
        printf("enter the value of a and b: \n");
        scanf("%f%f", &a, &b);
        printf("%f/%f=%f", a, b, a / b);
        break;
    case '*':
        printf("enter the value of a and b: \n");
        scanf("%f%f", &a, &b);
        printf("%f*%f=%f", a, b, a * b);
        break;
    default:
        printf("wrong choice");
    }
    return 0;
}

// if we want to scan the input values once, that is before when the switch cases starts then we have to use fflush(stdin)

#include <stdio.h>

int main()
{
    float a, b;
    char choice;
    printf("enter the values of a and b: \n");
    scanf("%f%f", &a, &b);
    fflush(stdin);
    printf("enter choice(+,*,/,*)\n");
    scanf("%c", &choice);
    switch (choice)
    {
    case '+':
        printf("%f+%f=%f", a, b, a + b);
        break;
    case '-':
        printf("%f-%f=%f", a, b, a - b);
        break;
    case '/':
        printf("%f/%f=%f", a, b, a / b);
        break;
    case '*':
        printf("%f*%f=%f", a, b, a * b);
        break;
    default:
        printf("wrong choice");
    }
    return 0;
}