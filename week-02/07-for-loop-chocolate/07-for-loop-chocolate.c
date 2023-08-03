#include <stdio.h>

int main()
{
  int n;

  printf("Enter the number of chocolate: ");
  scanf("%d", &n);

  int chocolates = n;
  int packets = n;

  for (; packets >= 4;)
  {
    chocolates += packets / 4;
    packets = (packets / 4) + (packets % 4);
  }

  printf("Total chocolates: %d", chocolates);

  return 0;
}