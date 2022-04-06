#include <stdio.h>

int main()
{
    char str[] = "aabbcc";
    int Longest_K_Unique(char str[], int k);
    int ans = Longest_K_Unique(str, 1);

    printf("Longest Substring With K Unique Characters: %d\n", ans);

    int Longest(char str[], int k);
    int ans2 = Longest(str, 1);

    printf("Longest Substring With K Unique Characters: %d", ans2);

    return 0;
}

int Longest_K_Unique(char str[], int k)
{
    char hash[256] = {0};
    int max = -1;
    int j = -1;
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {

        // -------Acquire----------
        if (hash[str[i]] == 0)
            count++;

        hash[str[i]]++;

        //-----Release-----------

        if (count > k)
        {
            while (j < i)
            {
                j++;
                hash[str[j]]--;

                if (hash[str[j]] == 0)
                    break;
            }
            count--;
        }
        if (count == k)
        {

            if ((i - j) > max)
                max = i - j;
        }
    }

    return max;
}

int Longest(char str[], int k)
{
    int hash_visited[256] = {0};
    int count = 0;
    int max = 0;
    int j;
    for (int i = 0; str[i] != '\0'; i++)
    {
        for (j = i; str[j] != '\0'; j++)
        {
            
            for (int p = i; p <= j; p++)
            {
                hash_visited[str[p]]++;
                if (hash_visited[str[p]] == 1)
                    count++;
            }

            if (count > k)
            {
                if ((j - i) > max)
                    max = j - i;

                for (int m = 0; m <= j; m++)
                {
                    hash_visited[str[m]]--;
                }

                count--;
                break;
            }

            for (int m = 0; m <= j; m++)
            {
                hash_visited[str[m]]--;
            }

            count = 0;
        }

        if (count == k)
        {
            if ((j - i) >= max)
                max = j - i;
        }
    }

    return max;
}