#include <stdio.h>

int main()
{

  int x, y, h;
  char char1, char2;

  scanf("%d %c %d %c", &x, &char1, &y, &char2);
  h = x * y;

  printf("%d%%", h);

  return 0;
}