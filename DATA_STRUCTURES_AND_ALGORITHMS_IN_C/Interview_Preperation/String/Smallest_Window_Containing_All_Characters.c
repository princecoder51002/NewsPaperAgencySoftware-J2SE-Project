#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char S[] = "timetopractise";
    char P[] = "toc";

    void smallest_Window(char S[], char P[]);
    smallest_Window(S,P);

    void smallest_Window_Hash(char S[], char P[]);
    smallest_Window_Hash(S, P);

    return 0;
}

void smallest_Window(char S[], char P[])
{
    int i, j, k;
    char *ans = (char *)malloc(sizeof(char));
    int len = 100;

    for(i=0;S[i]!='\0';i++)
    {
        for(j=i;S[j]!='\0';j++)
        {
            int m = 0;
            for(k=i;k<=j;k++)
            {
               ans[m++] = S[k];
            }

            ans[m] = '\0';
            int count = 0;
            int l=0;

            for(int p=0;ans[p]!='\0';p++)
            {
                if(ans[p] == P[l])
                {
                   count++;
                   l++;
                }
            }

            if(count == strlen(P))
            {
                 int length = strlen(ans);

                 if(length < len)
                 {
                    for(int m =0;ans[m]!='\0';m++)
                    {
                        printf("%c", ans[m]);
                    }
                    len = length;
                    printf("\n");
                 }
            }
        }
    }
}

void smallest_Window_Hash(char S[], char P[])
{
      int l1 = strlen(S);
      int l2 = strlen(P);

      if(l2 > l1)
      {
          printf("Not Possible\n");
          return;
      }

      int hash_pat[256] = {0};
      int hash_str[256] = {0};

      for(int i=0;i<l2;i++)
      {
          hash_pat[P[i]]++;
      }

      int start = 0, start_index = -1, min_length = __INT_MAX__;

      int count = 0;

      for(int j=0;S[j]!='\0';j++)
      {
          hash_str[S[j]]++;

          if(hash_str[S[j]] == hash_pat[S[j]])
          count++;

          if(count == l2)
          {
              while((hash_str[S[start]] > hash_pat[S[start]]) || (hash_pat[S[start]] == 0))
              {
                  if((hash_str[S[start]] > hash_pat[S[start]]))
                  hash_str[S[start]]--;

                  start++;
              }

              int len_window = j - start + 1;
              if(len_window < min_length)
              {
              min_length = len_window;
              start_index = start;
              }
          }
      }

      if(start_index == -1)
      {
          printf("No window Exists\n");
          return;
      }

      int h = start_index;

      while(S[h]!='\0' && min_length>0)
      {
         printf("%c", S[h]);
         h++;
         min_length--;
      }
}