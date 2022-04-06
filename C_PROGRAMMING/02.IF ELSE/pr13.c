// write a program for grade of a student using conditional operators

#include <stdio.h>

int main()
{
    int per;
    printf("enter your per: \n");
    scanf("%d", &per);
    char grade = (per > 90 ? printf("grade A") : per > 80 ? printf("grade B") : per > 70 ? printf("grade C") : printf("grade D"));
    printf("%c", grade);
    return 0;
}