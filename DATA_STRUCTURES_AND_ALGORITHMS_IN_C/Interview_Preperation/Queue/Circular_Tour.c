#include <stdio.h>

int main()
{
    int P[] = {6,3,7};
    int D[] = {4,6,3};

    int n = 4;

    int Circular_Tour(int P[], int D[], int n);
    int start = Circular_Tour(P,D,n);

    if(start)
    printf("Yes: %d", start);
    else 
    printf("No");

    return 0;
}

int Circular_Tour(int P[], int D[], int n)
{
    int start = 0;
    int end = 1;

    int curr_petrol = P[start] - D[start];

    while(start!=end || curr_petrol < 0)
    {
        while(start!=end && curr_petrol < 0)
        {
            curr_petrol = curr_petrol - (P[start] - D[start]);
            start = (start + 1) % n;

            if(start == 0)
            return -1;
        }

        curr_petrol = curr_petrol + (P[end] - D[end]);
        end = (end + 1)%n;
    }

    return start;
}