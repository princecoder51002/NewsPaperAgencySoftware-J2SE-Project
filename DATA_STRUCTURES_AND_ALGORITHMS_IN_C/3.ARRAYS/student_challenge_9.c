// write a program to find maximum and minimum in single scan

#include <stdio.h>

int main(){
    int i, n;
    printf("enter the value of n: \n");
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("enter the value at a[%d]: \n", i);
        scanf("%d", &a[i]);
    }
    int max=a[0];
    int min = a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
        else if(a[i]>max)
        max=a[i];
    }
    printf("maximum value : %d\n", max);
    printf("minimum value : %d", min);
    return 0;
}