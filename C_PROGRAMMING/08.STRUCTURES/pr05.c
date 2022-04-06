// write a basic program for array of structures

#include <stdio.h>

struct employee
{
    int eid;
    float bs, da, hra, gs;
};
int main()
{
    int n, i;
    float sum = 0;
    printf("enter no. of employes: \n");
    scanf("%d", &n);
    struct employee e[n];
    for (i = 0; i < n; i++)
    {
        printf("enter empid[%d] and basic salary[%d]: \n", i, i);
        scanf("%d%f", &e[i].eid, &e[i].bs);
        e[i].da = e[i].bs * 50 / 100;
        e[i].hra = e[i].bs * 40 / 100;
        e[i].gs = e[i].bs + e[i].da + e[i].hra;
    }
    printf("\noutput");
    float max = e[0].gs;
    for (i = 0; i < n; i++)
    {
        printf("\n eimpid:%d, da:%f, hra:%f, gross:%f", e[i].eid, e[i].da, e[i].hra, e[i].gs);
        sum = sum + e[i].gs;
        if (max < e[i].gs)
            max = e[i].gs;
    }
    printf("\n maximum salary: %f", max);
    printf("total salary: %f", sum);

    return 0;
}