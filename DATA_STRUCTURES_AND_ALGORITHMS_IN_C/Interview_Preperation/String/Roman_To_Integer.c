#include <stdio.h>
#include <string.h>

int main()
{

    char *rmn = "MCMIV";
    int roman_to_int(char *string);

    int answer = roman_to_int(rmn);
    printf("Answer is %d", answer);

    return 0;
}

int value(char x)
{
    if(x=='I')
    return 1;
    if(x=='V')
    return 5;
    if (x == 'X')
        return 10;
    if (x == 'L')
        return 50;
    if (x == 'C')
        return 100;
    if (x == 'D')
        return 500;
    if (x == 'M')
        return 1000;

    return -1;
}

int roman_to_int(char *string)
{
     int answer=0;

     for(int i = 0; string[i]!='\0';i++)
     {
         int length = strlen(string);
         int s1=value(string[i]);

         if(i+1 < length)
         {
             int s2 = value(string[i+1]);

             if(s1 > s2)
             answer = answer + s1;

             else 
             {
             answer = answer + s2 - s1;
             i++;
             }
         }

         else 
         answer = answer + s1;
     }

     return answer;
}