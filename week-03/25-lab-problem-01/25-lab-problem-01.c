#include <stdio.h>

int main()
{

  int friends, a, b, c, i;
  int solved = 0;

  scanf("%d", &friends);

  for (i = 0; i < friends; i++)
  {
    scanf("%d%d%d", &a, &b, &c);
    if (a + b + c >= 2)
    {
      solved++;
    }
  }

  printf("%d \n", solved);

  return 0;
}
