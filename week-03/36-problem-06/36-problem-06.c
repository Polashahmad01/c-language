#include <stdio.h>

int main()
{

  int N;

  scanf("%d", &N);

  if (N <= 0)
  {
    return 0;
  }

  int i, j;

  for (i = 1; i <= N; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%d ", j);
    }

    printf("\n");
  }

  return 0;
}