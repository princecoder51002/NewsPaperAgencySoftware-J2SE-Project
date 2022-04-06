// practise program for call by value (it will not swap the two numbers )

#include <stdio.h>

int main()
{
    void swap1(int a, int b);
    int a, b;
    printf("enter the value of a and b: \n");
    scanf("%d%d", &a, &b);
    swap1(a, b);
    printf("now a= %d, b=%d", a, b);
    return 0;
}
void swap1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// practise program for call by reference (it will swap the two numbers)

#include <stdio.h>

int main()
{
    void swap2(int *pa, int *pb);
    int a, b;
    printf("enter the value of a and b: \n");
    scanf("%d%d", &a, &b);
    swap2(&a, &b);
    printf("now a=%d and b=%d", a, b);
    return 0;
}
void swap2(int *pa, int *pb)
{
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}