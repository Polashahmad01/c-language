#include <stdio.h>

int main()
{
  int num, i = 10;

  scanf("%d", &num);

  while (num / i > 0)
  {
    printf("Hi\n");
    i *= 10;
  }

  return 0;
}