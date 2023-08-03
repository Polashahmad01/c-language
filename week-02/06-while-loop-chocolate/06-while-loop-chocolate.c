#include <stdio.h>

int main()
{
  int n;

  printf("Enter the number of Chocolate: ");
  scanf("%d", &n);

  int chocolates = n;
  int packets = n;

  while (packets >= 4)
  {
    chocolates += (packets / 4);
    packets = (packets / 4) + (packets % 4);
  }

  printf("Total Chocolate: %d", chocolates);

  return 0;
}