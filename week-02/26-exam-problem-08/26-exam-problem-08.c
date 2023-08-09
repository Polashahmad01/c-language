#include <stdio.h>

int main()
{
  int numOne, numTwo;

  scanf("%d %d", &numOne, &numTwo);

  int gcd = 1;

  for (int i = 1; i <= numOne && i <= numTwo; ++i)
  {
    if (numOne % i == 0 && numTwo % i == 0)
    {
      gcd = i;
    }
  }

  int lcm = (numOne * numTwo) / gcd;
  printf("%d", lcm);

  return 0;
}