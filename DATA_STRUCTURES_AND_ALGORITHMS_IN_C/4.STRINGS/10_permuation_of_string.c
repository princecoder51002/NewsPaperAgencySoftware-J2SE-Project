#include <stdio.h>

int main()
{
    char a[30];
    printf("enter string: \n");
    gets(a);
    void perm(char a[], int k);
    perm(a, 0);
    return 0;
}
void perm(char a[], int k)
{
    static int A[10] = {0};
    static char res[10];
    int i;
    if (a[k] == '\0')
    {
        res[k] == '\0';
        puts(res);
    }
    else
    {
        for (i = 0; a[i] != '\0'; i++)
        {
            if (A[i] == 0)
            {
                res[k] = a[i];
                A[i] = 1;
                perm(a, k + 1);
                A[i] = 0;
            }
        }
    }
}