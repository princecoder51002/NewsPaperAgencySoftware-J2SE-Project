#include <stdio.h>

int main()
{
    int A[7][7] = {
        {0,0,0,0,0,0,0},
        {0,0,1,1,0,0,0},
        {0,1,0,0,1,0,0},
        {0,1,0,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0}
    };

    void DFS(int A[][7], int i, int m[]);
    int visited[7] = {0};
    DFS(A,1, visited);

    return 0;
}

void DFS(int A[][7], int i, int m[])
{

    if(m[i] == 0)
    {
        printf("%d ", i);
        m[i] = 1;

        for(int v=0;v<=7;v++)
        {
            if(A[i][v] == 1 && m[v] == 0)
            DFS(A,v,m);
        }
    }
}