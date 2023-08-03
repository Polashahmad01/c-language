#include <stdio.h>

int main()
{

  int n, m;

  printf("Enter two positive number: ");
  scanf("%d%d", &n, &m);

  if (n > 0 && m > 0)
  {
    for (int i = 1; i <= n; i++)
    {
      if (i % m == 0)
      {
        printf("%d ", i);
      }
    }
  }

  return 0;
}