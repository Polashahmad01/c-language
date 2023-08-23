#include <stdio.h>

int main()
{

  int ara[105];
  int n, i;
  int ans;
  scanf("%d", &n);
  int even_counter = 0, odd_counter = 0;

  for (i = 1; i <= n; i++)
  {
    scanf("%d", &ara[i]);
  }

  for (i = 1; i <= n; i++)
  {
    if (ara[i] % 2 == 0)
    {
      even_counter++;
    }
    else
    {
      odd_counter++;
    }
  }

  if (even_counter == 1)
  {
    for (i = 1; i <= n; i++)
    {
      if (ara[i] % 2 == 0)
      {
        ans = i;
      }
    }
  }
  else
  {
    for (i = 1; i <= n; i++)
    {
      if (ara[i] % 2 != 0)
      {
        ans = i;
      }
    }
  }

  printf("%d\n", ans);

  return 0;
}