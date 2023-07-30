#include <stdio.h>

int main()
{

  int x, y;

  printf("Please enter two number: ");
  scanf("%d%d", &x, &y);

  if (x > y)
  {
    printf("A is bigger\n");
  }
  else if (y > x)
  {
    printf("B is bigger\n");
  }
  else
  {
    printf("They are equal\n");
  }

  return 0;
}