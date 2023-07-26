#include <stdio.h>

int main()
{

  int a, b;

  printf("Please enter two numbers: ");
  scanf("%d%d", &a, &b);

  int sum = a + b;

  printf("The sum of two number is: %d", sum);

  return 0;
}