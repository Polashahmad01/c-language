#include <stdio.h>

int main()
{

  int N;
  printf("Enter the size of the array: ");
  scanf("%d", &N);

  if (N <= 1)
  {
    printf("Array should at least 2 for this program\n");
  }

  int arr[N];
  printf("Enter the elements of the array\n");

  for (int i = 0; i < N; i++)
  {
    scanf("%d", &arr[i]);
  }

  int target;
  printf("Enter the target sum: ");
  scanf("%d", &target);

  int isFound = 0;

  for (int i = 0; i < N; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
      if (arr[i] + arr[j] == target)
      {
        isFound = 1;
        break;
      }
    }
    if (isFound)
    {
      break;
    }
  }

  if (isFound)
  {
    printf("YES\n");
  }
  else
  {
    printf("NO\n");
  }

  return 0;
}