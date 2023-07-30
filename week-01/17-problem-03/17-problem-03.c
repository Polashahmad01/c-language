#include <stdio.h>

int main()
{

  int x;

  printf("Please enter a number: ");
  scanf("%d", &x);

  if (x > 0)
  {
    if (x % 2 == 0)
    {
      printf("Even\n");
    }
    else
    {
      printf("Odd\n");
    }
  }

  return 0;
}