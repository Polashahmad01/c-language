#include <stdio.h>

int main()
{

  int num;
  char ch;

  printf("Enter some number including percentage sign: ");
  scanf("%d%c", &num, &ch);

  printf("The number is: %d\n", num);

  return 0;
}
