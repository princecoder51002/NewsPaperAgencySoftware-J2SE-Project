//write a program to input marks of n students and count number of students got >=80 marks and also
// count who got marks b/w 60 and 70

#include <stdio.h>

int main()
{
    int n, i, count1 = 0, count2 = 0;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    int s[n];
    for (i = 0; i < n; i++)
    {
        printf("enter value at s[%d]: \n", i);
        scanf("%d", &s[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("marks of %d student: %d\n", i + 1, s[i]);
        if (s[i] >= 80)
            count1++;
        else if (s[i] >= 60 && s[i] <= 70)
            count2++;
    }
    printf("no. of students who got marks >=80: %d\n", count1);
    printf("no. of students who got marks >=60 and <=70: %d\n", count2);
    return 0;
}