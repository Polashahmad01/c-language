#include <stdio.h>

int main()
{
  int N;

  scanf("%d", &N);

  if (N <= 0)
  {
    printf("Non-Integer");
    return 0;
  }

  int arra[N];
  int i, x;

  for (i = 0; i < N; i++)
  {
    scanf("%d", &x);
    arra[i] = x;
  }

  int sum = 0;

  for (int j = 0; j < N; j++)
  {
    if (arra[j] % 2 != 0)
    {
      sum += arra[j];
    }
  }

  if (sum % 2 == 0)
  {
    printf("YES\n");
  }
  else
  {
    printf("NO\n");
  }

  return 0;
}