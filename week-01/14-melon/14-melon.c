#include <stdio.h>

int main()
{

  int w;

  printf("Enter the weight of your melon: ");
  scanf("%d", &w);

  if (w % 4 == 0)
  {
    printf("Possible\n");
  }

  else
  {
    printf("Impossible\n");
  }

  return 0;
}