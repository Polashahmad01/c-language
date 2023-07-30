#include <stdio.h>

int main()
{

  int x, y;

  printf("Please enter two number: ");
  scanf("%d%d", &x, &y);

  if (x > y)
  {
    printf("%d is greater than %d", x, y);
  }
  else if (y > x)
  {
    printf("%d is greater than %d", y, x);
  }
  else
  {
    printf("They are equal");
  }

  return 0;
}
