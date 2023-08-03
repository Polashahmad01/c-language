#include <stdio.h>

int main()
{
  int n, i, w, sum = 0;

  printf("Enter the number of passengers: ");
  scanf("%d", &n);

  i = 1;
  while (i <= n)
  {
    scanf("%d", &w);
    sum += w;
    i++;
  }

  printf("The total passengers weight is: %d\n", sum);

  return 0;
}