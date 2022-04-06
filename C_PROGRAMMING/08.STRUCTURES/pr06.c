// write a program for n students using array of structures for maximum marks, total , minimum percentage and average percentage

#include <stdio.h>

struct student
{
    int rollno;
    float marksp, marksm, marksc, total, percentage;
};
int main()
{
    int n, i;
    float hpercentage = 0;
    printf("enter the number of students: \n");
    scanf("%d", &n);
    struct student s[n];
    for (i = 0; i < n; i++)
    {
        printf("enter roll no. , marks in physics , marks in maths, marks in chemistry: \n");
        scanf("%d%f%f%f", &s[i].rollno, &s[i].marksp, &s[i].marksm, &s[i].marksc);
        s[i].total = s[i].marksp + s[i].marksm + s[i].marksc;
        s[i].percentage = s[i].total / 300 * 100;
        printf("percentage[%d] : %f\n", i, s[i].percentage);
    }

    float max = s[0].total;
    float min = s[0].percentage;
    for (i = 0; i < n; i++)
    {
        printf("total marks : %f\n", s[i].total);
        if (max < s[i].total)
            max = s[i].total;

        if (min > s[i].percentage)
            min = s[i].percentage;
    }
    printf("maximum marks : %f\n", max);
    printf("minimum percentage : %f\n", min);
    for (i = 0; i < n; i++)
    {
        hpercentage = hpercentage + s[i].percentage;
    }
    printf("average percentage : %f", hpercentage / n);
    return 0;
}