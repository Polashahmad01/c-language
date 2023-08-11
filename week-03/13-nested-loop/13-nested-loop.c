#include <stdio.h>

int main()
{

  int i, j;
  float sum = 0.0, x, avg = 0.0;

  for (i = 1; i <= 2; i++)
  {
    for (j = 1; j <= 3; j++)
    {
      scanf("%f", &x);
      sum += x;
    }

    avg = sum / 3;
    printf("Average: %f", avg);
  }

  return 0;
}