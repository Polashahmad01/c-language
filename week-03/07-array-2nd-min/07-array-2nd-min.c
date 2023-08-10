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

  int min = ara[0];
  int secondMin = 0;

  for (i = 0; i < N; i++)
  {
    if (ara[i] < min)
    {
      secondMin = min;
      min = ara[i];
    }
  }

  printf("%d\n", secondMin);

  return 0;
}