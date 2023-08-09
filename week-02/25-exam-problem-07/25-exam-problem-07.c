#include <stdio.h>

int main()
{
  int numOne, numTwo;

  scanf("%d %d", &numOne, &numTwo);

  while (numTwo != 0)
  {
    int temp = numTwo;
    numTwo = numOne % numTwo;
    numOne = temp;
  }

  printf("GCD is %d", numOne);

  return 0;
}