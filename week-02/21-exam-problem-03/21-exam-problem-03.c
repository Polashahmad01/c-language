#include <stdio.h>

int main()
{

  long long int num, count = 0;
  scanf("%lld", &num);

  while (num != 0)
  {
    count++;
    num /= 10;
  }

  printf("%lld\n", count);

  return 0;
}
