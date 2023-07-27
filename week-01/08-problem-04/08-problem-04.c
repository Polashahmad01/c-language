#include <stdio.h>

int main()
{

  int numOne, numTwo;

  printf("Please enter two numbers: ");
  scanf("%d%d", &numOne, &numTwo);

  if (numOne > 0 && numTwo > 0)
  {
    int summation, subtraction, multiplication;
    summation = numOne + numTwo;
    subtraction = numOne - numTwo;
    multiplication = numOne * numTwo;

    printf("%d %d %d", summation, subtraction, multiplication);
  }

  return 0;
}