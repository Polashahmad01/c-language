#include <stdio.h>

int main()
{
  int n, i, w, sum = 0;

  printf("Enter the number of passengers: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    scanf("%d", &w);
    sum += w;
  }

  printf("Total passengers weight is: %d", sum);

  return 0;
}