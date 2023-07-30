#include <stdio.h>

int main()
{

  int x, y, z;

  printf("Enter three number: ");
  scanf("%d%d%d", &x, &y, &z);

  if (x > y && x > z)
  {
    printf("%d is greater than %d %d", x, y, z);
  }
  else if (y > x && y > z)
  {
    printf("%d is greater than %d %d", y, x, z);
  }
  else if (z > x && z > y)
  {
    printf("%d is greater than %d %d", z, x, y);
  }
  else
  {
    printf("They are equal");
  }

  return 0;
}