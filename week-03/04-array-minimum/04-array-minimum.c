#include <stdio.h>

int main()
{

  int ara[5];
  int i;

  for (i = 0; i < 5; i++)
  {
    scanf("%d", &ara[i]);
  }

  int min = ara[0];

  for (i = 0; i < 5; i++)
  {
    if (ara[i] < min)
    {
      min = ara[i];
    }
  }

  printf("%d\n", min);

  return 0;
}