#include <stdio.h>

int main()
{

  int ara[6];
  int i;

  for (i = 0; i < 6; i++)
  {
    scanf("%d", &ara[i]);
  }

  int max = ara[0];

  for (i = 0; i < 6; i++)
  {
    if (ara[i] > max)
    {
      max = ara[i];
    }
  }

  printf("%d\n", max);

  return 0;
}