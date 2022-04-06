#include <stdio.h>

int main()
{
    char num[] = "4697557964";
    int n = 10;

    void Palindrome(char num[], int n);
    Palindrome(num,n);

    return 0;
}

void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

void reverse(char num[], int i, int j)
{
    while(j > i)
    {
        swap(&num[i], &num[j]);
        i++;
        j--;
    }
}

void Palindrome(char num[], int n)
{
    if(n <= 3)
    {
    printf("Not Possible");
    return;
    }

    int mid = n / 2 - 1;
    int i, j;

    for(i = mid - 1; i>=0 ; i--)
    {
        if(num[i] < num[i+1])
        break;
    }

    if(i < 0)
    {
        printf("Not possible");
        return;
    }

    int smallest = i+1;

    for(j = i + 2; j<=mid;j++)
    {
       if(num[j] > num[i] && num[smallest] >= num[j])
       smallest = j;
    }

    swap(&num[i], &num[smallest]);
    swap(&num[n-i-1], &num[n-smallest-1]);

    reverse(num,i+1,mid);

    if (n % 2 == 0)
    reverse(num, mid + 1, n - i - 2);

    else 
    reverse(num, mid + 2, n - i - 2);

    printf("New Palindrome Number is: \n");
    for(int i=0;num[i]!='\0';i++)
    {
        printf("%c", num[i]);
    }
}