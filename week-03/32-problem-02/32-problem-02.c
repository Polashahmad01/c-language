#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N);

  if (N <= 0)
  {
    printf("Please enter positive integer\n");
    return 0;
  }

  int arr[N];

  for (int i = 0; i < N; i++)
  {
    scanf("%d", &arr[i]);

    if (arr[i] <= 0)
    {
      printf("Please enter positive integer\n");
      return 0;
    }

    for (int j = 0; j < i; j++)
    {
      if (arr[j] == arr[i])
      {
        printf("Please enter distinct integers.\n");
        return 0;
      }
    }
  }

  for (int i = 0; i < N - 1; i++)
  {
    for (int j = 0; j < N - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < N; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}