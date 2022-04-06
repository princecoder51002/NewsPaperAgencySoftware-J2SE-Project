// swap the two nubers if they are not same

#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("enter the value of a,b before swap: \n");
    scanf("%d%d", &a, &b);

    if (a != b)
    {
        temp = a;
        a = b;
        b = temp;
        printf("now, after swap a=%d , b=%d\n", a, b);
    }
    else
        printf("numbers are same , so swapping doest make any sense");

    return 0;
}