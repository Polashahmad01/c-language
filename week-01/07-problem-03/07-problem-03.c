#include <stdio.h>

int main()
{

  int num;

  printf("Please enter a number: ");
  scanf("%d", &num);

  if (num > 0)
  {
    printf("Double of %d is: %d\n", num, num * 2);
  }

  return 0;
}