#include <stdio.h>

int main()
{
  unsigned int N;
  scanf("%d", &N);

  int array[N];
  int i, x;

  for (i = 0; i < N; i++)
  {
    scanf("%d", &x);
    array[i] = x;
  }

  int sum = 0;

  for (i = 0; i < N; i++)
  {
    if (array[i] % 2 == 1)
    {
      sum += array[i];
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
