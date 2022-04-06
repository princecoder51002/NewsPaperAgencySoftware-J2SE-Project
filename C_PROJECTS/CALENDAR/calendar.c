#include <stdio.h>
#include <stdlib.h>

int get_1st_day(int year) // to get the first day and date of january it wil return 0-->for sunday and 6-->for saturday and remaining in between
{
    int day;
    day = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
    return day;
}

int main()
{

    system("color 3F"); // 3 for aqua and F for white
    int year, i, daysinmonth, j, weekday = 0, startingday;
    printf("Enter Your Desired Year: ");
    scanf("%d", &year);

    char *month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    int monthday[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // for non leap year

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) // condition for leap year
        monthday[1] = 29;
    startingday = get_1st_day(year);
    for (i = 0; i < 12; i++)
    {
        daysinmonth = monthday[i];
        printf("\n\n*********************%s***********************\n", month[i]);
        printf("\n  Sun   Mon   Tue   Thrus   Fri   Sat\n");

        for (weekday = 0; weekday < startingday; weekday++)
        {
            printf("     ");
        }

        for (j = 1; j <= daysinmonth; j++)
        {
            printf("%5d", j);

            if (++weekday > 6)
            { //weekday if for days in a week
                printf("\n");
                weekday = 0;
            }
            startingday = weekday;
        }
    }

    return 0;
}