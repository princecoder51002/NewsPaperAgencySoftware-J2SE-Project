#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n, k;
    printf("Enter no. of persons and persons to be skipped: \n");
    scanf("%d%d", &n, &k);

    int joseph(int n, int k);
    int position = joseph(n, k);

    printf("Safest Position: %d", position);

    return 0;
}

int joseph(int n, int k)
{
  if(n==1)
  return 0;

  else 
  return (joseph(n-1,k) + k) % n;
}