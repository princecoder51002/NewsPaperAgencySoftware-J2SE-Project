// temperature of a city in fahrenheit is input through keyboards . write a program to convert this temperature into centigrade

#include <stdio.h>

int main()
{
    float c, fahrenheit;
    printf("enter temperature in fahrenheit: \n");
    scanf("%f", &fahrenheit);
    c = (fahrenheit - 32) * 5 / 9;
    printf("temperature in centigrade = %f\n", c);
    return 0;
}