#include <stdio.h>

int main()
{
    float p[] = {10,5,15,7,6,18,3};
    float w[] = {2,3,5,7,1,4,1};

    float m = 15;

    float KnapSack(float p[], float w[], int n, float m);
    float ans = KnapSack(p,w,7,m);

    printf("%f", ans);

    return 0;
}

void swap(float *x, float *y)
{
    float temp = *x;
    *x = *y;
    *y = temp;
}

float KnapSack(float p[], float w[], int n, float m)
{
    float Ratio[n];

    for(int i=0;i<n;i++)
    {
        Ratio[i] = (p[i]/w[i]);
    }

    for(int i=0;i<n-1;i++)
    {
        int flag =0;
        for(int j=i+1;j<n;j++)
        {
            if(Ratio[i] < Ratio[j])
            {
            swap(&Ratio[i], &Ratio[j]);
            swap(&p[i],&p[j]);
            swap(&w[i],&w[j]);
            flag = 1;
            }
        }

        if(flag==0)
        break;
    }

    float profit = 0;
    float weight = 0;
    int measure = 0;

    while(weight + w[measure] <= m)
    {
       profit = profit + p[measure];
       weight = weight + w[measure++];
    }
    
    printf("%f ", profit);
    printf("%f ", weight);
    float extra = ((m - weight)/(w[measure]))*p[measure];

    profit = profit + extra;

    return profit;

}