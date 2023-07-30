#include <stdio.h>

int main()
{

  int x, y, z;

  printf("Please enter three numbers: ");
  scanf("%d%d%d", &x, &y, &z);

  if (y > x && y > z)
  {
    printf("B is bigger\n");
  }
  else if (x > y && x > z)
  {
    printf("A is bigger\n");
  }
  else if (z > x && z > y)
  {
    printf("C is bigger\n");
  }
  else if (x == y && x == z)
  {
    printf("They are equal\n");
  }
  else if (y == z)
  {
    printf("B and C both are bigger\n");
  }
  else if (x == z)
  {
    printf("A and C both are bigger\n");
  }
  else if (x == y)
  {
    printf("A and B both are bigger\n");
  }

  return 0;
}