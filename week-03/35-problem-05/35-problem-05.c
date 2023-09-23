#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N);

  int arr[N];
  for (int i = 0; i < N; i++)
  {
    scanf("%d", &arr[i]);
  }

  int primeCount = 0;
  for (int i = 0; i < N; i++)
  {
    int isPrime = 1;
    if (arr[i] <= 1)
    {
      isPrime = 0;
    }
    else
    {
      for (int j = 2; j * j <= arr[i]; j++)
      {
        if (arr[i] % j == 0)
        {
          isPrime = 0;
          break;
        }
      }
    }
    if (isPrime)
    {
      printf("%d ", arr[i]);
      primeCount++;
    }
  }

  printf("%d\n", primeCount);

  return 0;
}
