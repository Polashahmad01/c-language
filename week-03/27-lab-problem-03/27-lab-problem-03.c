#include <stdio.h>

int main()
{

  int num, count, i;

  scanf("%d%d", &num, &count);

  for (i = 0; i < count; i++)
  {
    if (num % 10 == 0)
    {
      num /= 10;
    }
    else
    {
      num--;
    }
  }

  printf("%d\n", num);

  return 0;
}