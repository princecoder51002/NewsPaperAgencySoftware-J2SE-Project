// program for grade of a student using ladder if-else

#include <stdio.h>

int main()
{
    int marks;
    printf("enter marks: \n");
    scanf("%d", &marks);
    if (marks >= 90 && marks <= 100)
        printf("grade A");
    else if (marks >= 800 && marks <= 90)
        printf("grade B");
    else if (marks >= 70 && marks <= 80)
        printf("grade C");
    else if (marks >= 60 && marks <= 70)
        printf("grade D");
    else
        printf("grade E");
    return 0;
}