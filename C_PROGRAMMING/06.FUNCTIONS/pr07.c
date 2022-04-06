// write a program for reverse of a number using arguements (pass 'n' as arguement)

#include <stdio.h>

int main()
{
    int n;
    printf("enter value of n: \n");
    scanf("%d", &n);
    int reverse(int N);
    int rev = reverse(n);
    printf("reverse = %d", rev);
    return 0;
}
int reverse(int N)
{
    int rev = 0, r;
    while (N != 0)
    {

        r = N % 10;
        rev = rev * 10 + r;
        N = N / 10;
    }
    return (rev);
}