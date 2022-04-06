// write a program difference of time of two clocks

#include <stdio.h>

struct time
{
    int min;
    int sec;
    int hour;
};
int main()
{
    struct time clock1, clock2, diff;
    printf("enter the time in clock1: \n");
    scanf("%d%d%d", &clock1.hour, &clock1.min, &clock1.sec);
    printf("enter the time in clock2: \n");
    scanf("%d%d%d", &clock2.hour, &clock2.min, &clock2.sec);
    int df = abs((clock1.hour * 60 * 60 + clock1.min * 60 + clock1.sec) - (clock2.hour * 60 * 60 + clock2.min * 60 + clock2.sec));
    diff.hour = df / (60 * 60);
    diff.min = (df % (60 * 60) / 60);
    diff.sec = (df % (60 * 60) % 60);
    printf("%d_%d_%d", diff.hour, diff.min, diff.sec);

    return 0;
}