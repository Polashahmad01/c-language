#include <stdio.h>

int main()
{

  int n, i;

  printf("Enter a number: ");
  scanf("%d", &n);

  if (n > 0)
  {
    for (i = 1; i <= n; i++)
    {
      printf("%d ", i);
    }
  }
  else
  {
    for (i = 1; i >= n; i--)
    {
      printf("%d ", i);
    }
  }

  return 0;
}