#include <stdio.h>

int main()
{
    char str[] = "aaaa";
    int n = 4;

    int length_of_pref_suffix(char str[], int n);
    int ans = length_of_pref_suffix(str, n);

    printf("%d", ans);

    return 0;
}

int length_of_pref_suffix(char str[], int n)
{
   if (n < 2)
   return 0;

   int len = 0;
   int i = 1;

   while(i < n)
   {
       if(str[i] == str[len])
       {
           len++;
           i++;
       }

       else 
       {
           i = i - len + 1;
           len = 0;
       }
   }

   return len;
}