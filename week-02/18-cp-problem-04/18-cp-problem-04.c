#include <stdio.h>

int main()
{
  int n, k, i, odd_count = 0, even_count = 0, odd_num, even_num;

  scanf("%d %d", &n, &k);

  odd_count = (n / 2) + (n % 2);
  even_count = n / 2;

  if (k <= odd_count)
  {
    odd_num = 2 * k - 1;
    printf("%d \n", odd_num);
  }
  else if (k >= odd_count)
  {
    even_num = (k - odd_count) * 2;
    printf("%d \n", even_num);
  }

  return 0;
}