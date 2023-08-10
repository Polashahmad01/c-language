#include <stdio.h>

int main()
{

  int N;
  scanf("%d", &N);

  int ara[N];
  int i;

  for (i = 0; i < N; i++)
  {
    scanf("%d", &ara[i]);
  }

  int max = ara[0];
  int secondMax = 0;

  for (i = 0; i < N; i++)
  {
    if (ara[i] > max)
    {
      secondMax = max;
      max = ara[i];
    }
  }

  printf("2nd max: %d\n", secondMax);

  return 0;
}

// 12 45 6 45 3 56 1
