#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n = 4;
    char *exp[n];
    
    for(int i = 0; i < n;i++)
    {
        exp[i] = malloc(100 * sizeof(char)); /* allocates 100 bytes */
        printf("Enter word: ");
        scanf("%99s", exp[i]);
    }

    char *Common_Prefix(char **exp, int n);
    char *ans;

    ans = Common_Prefix(exp,n);
    printf("%s", ans);
    return 0;
}

char *findprefix(char *prefix, char *check)
{
   int length1 = 0;
   int length2 = 0;

   char *prefix_1;
   prefix_1 = (char *)malloc(100*sizeof(char));


   for(int i = 0;prefix[i]!='\0';i++)
   {
       length1++;
   }

   for(int i = 0;check[i]!='\0';i++)
   {
       length2++;
   }
   
   int i, j;

   for(i=0,j=0;i<length1-1&&j<length2-1;i++,j++)
   {
        if(prefix[i]!=check[j])
        break;
        prefix_1[i] = prefix[i];
   }

   return prefix_1;
}

char *Common_Prefix(char *exp[], int n)
{
    char *prefix = exp[0];

    for(int i = 1; i<n;i++)
    {
      prefix = findprefix(prefix,exp[i]);
    }

    return prefix;
}
