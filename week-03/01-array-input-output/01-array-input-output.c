#include <stdio.h>

int main()
{

  int ara[10];

  ara[0] = 5450;
  ara[1] = 450;
  ara[2] = ara[0] - ara[1];

  printf("%d\n", ara[0]);
  printf("%d\n", ara[1]);
  printf("%d\n", ara[2]);
  printf("%d\n", ara[5]);
  printf("%d\n", ara[9]);

  return 0;
}
