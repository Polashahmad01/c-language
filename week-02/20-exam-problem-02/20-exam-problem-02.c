#include <stdio.h>

int main()
{
  int numOne, numTwo, numThree, numFour;

  scanf("%d %d %d %d", &numOne, &numTwo, &numThree, &numFour);

  if ((numOne != numTwo) && (numOne != numThree) && (numOne != numFour) && (numTwo != numOne) && (numTwo != numThree) && (numTwo != numFour) && (numThree != numOne) && (numThree != numTwo) && (numThree != numFour) && (numFour != numOne) && (numFour != numTwo) && (numFour != numThree))
  {
    if ((numOne > numTwo) && (numOne > numThree) && (numOne > numFour))
    {
      printf("Largest = %d\n", numOne);
    }
    if ((numTwo > numOne) && (numTwo > numThree) && (numTwo > numFour))
    {
      printf("Largest = %d\n", numTwo);
    }
    if ((numThree > numOne) && (numThree > numTwo) && (numThree > numFour))
    {
      printf("Largest = %d\n", numThree);
    }
    if ((numFour > numOne) && (numFour > numTwo) && (numFour > numThree))
    {
      printf("Largest = %d\n", numFour);
    }
    if ((numOne < numTwo) && (numOne < numThree) && (numOne < numFour))
    {
      printf("Smallest = %d\n", numOne);
    }
    if ((numTwo < numOne) && (numTwo < numThree) && (numFour))
    {
      printf("Smallest = %d\n", numTwo);
    }
    if ((numThree < numOne) && (numThree < numTwo) && (numThree < numFour))
    {
      printf("Smallest = %d\n", numThree);
    }
    if ((numFour < numOne) && (numFour < numTwo) && (numFour < numThree))
    {
      printf("Smallest = %d\n", numFour);
    }
  }

  return 0;
}