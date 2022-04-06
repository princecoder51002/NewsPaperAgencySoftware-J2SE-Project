// write a program for taylor series using recurssion

#include <stdio.h>

float e(int x, int n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
        return 1;
    else
    {
        r = e(x, n - 1);
        p = p * x;
        f = f * n;
        return r + p / f;
    }
}
int main()
{
    float m = e(4, 10);
    printf("%.5f", m);
    return 0;
}

// now using horners rule

#include <stdio.h>

double e(int x, int n)
{
  static double s = 1;

  if (n == 0)
    return s;
  else
  {
    s = 1 + x * s / n;
    return e(x, n - 1);
  }
}
int main()
{

  printf("%f", e(1, 10));
  return 0;
}

// now using loops

#include <stdio.h>

double e(int x, int n)
{
  double s = 1;
  int i;
  double num = 1, den = 1;
  for (i = 1; i <= n; i++)
  {
    num = num * x;
    den = den * i;
    s = s + num / den;
  }
  return s;
}
int main()
{
  printf("%f", e(1, 10));
  return 0;
}