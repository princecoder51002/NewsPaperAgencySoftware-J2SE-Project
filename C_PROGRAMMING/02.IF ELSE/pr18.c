// write a program for to choose a day in a week

#include <stdio.h>

int main()
{
    int choice;
    printf("enter choice(1,2,3,4,5,6,7)\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("monday");
        break;
    case 2:
        printf("tuesday");
        break;
    case 3:
        printf("wednesday");
        break;
    case 4:
        printf("thrusday");
        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("saturday");
        break;
    case 7:
        printf("sunday");
        break;
    default:
        printf("wrong choice");
    }
    return 0;
}