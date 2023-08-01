#include <stdio.h>

int main()
{

  int a, b, diff;

  scanf("%d%d", &a, &b);

  if (a > b)
  {
    diff = a - b;
    printf("%d\n", diff);
  }
  else
  {
    diff = b - a;
    printf("%d\n", diff);
  }

  return 0;
}