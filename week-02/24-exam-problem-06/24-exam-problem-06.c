#include <stdio.h>

int main()
{
  int numOne, numTwo;

  printf("Enter the first number: ");
  scanf("%d", &numOne);

  printf("Enter the second number: ");
  scanf("%d", &numTwo);

  if (numTwo % numOne == 0)
  {
    printf("The second number is divisible by the first number.\n");
  }
  else if (numTwo % numOne != 0 && numOne % numTwo != 0)
  {
    printf("None of them are divisible by the other.\n");
  }
  else if (numOne % numTwo == 0)
  {
    printf("The first number is divisible by the second number.\n");
  }

  return 0;
}