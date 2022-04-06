#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[] = "geeksforgeeks";
    int Longest(char str[]);
    int ans = Longest(str);

    printf("Longest Substring Without Repeating Characters: %d\n", ans);

    int Longest_Unique(char str[]);
    int ans2 = Longest_Unique(str);

    printf("%d", ans2);

    return 0;
}

int Longest(char str[])
{
    char hash[256] = {0};
    int max = 0;
    int j = -1;
    for (int i = 0; str[i] != '\0'; i++)
    {

        // -------Acquire----------

        hash[str[i]]++;

        //-----Release-----------

        if (hash[str[i]] > 1)
        {
            while (j < i)
            {
                j++;
                hash[str[j]]--;

                if (hash[str[j]] == 1)
                    break;
            }

            if ((i - j) > max)
                max = i - j;
        }
    }

    return max;
}

int Longest_Unique(char str[])
{
    int len = strlen(str);
    int hash_visited[256] = {0};
    int max = 0;
    int j;

    for (int i = 0; i < len; i++)
    {
        for (j = i; j < len; j++)
        {
            for (int k = i; k <= j; k++)
            {
                hash_visited[str[k]]++;
            }

            if (hash_visited[str[j]] > 1)
                break;

            for (int p = i; p <= j; p++)
            {
                hash_visited[str[p]]--;
            }

            if ((j - i) > max)
            max = j - i + 1;
        }

        for (int m = i; m <= j; m++)
        {
            hash_visited[str[m]]--;
        }

        if ((j - i) > max)
            max = j - i;
    }

    return max;
}