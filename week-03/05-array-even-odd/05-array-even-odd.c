#include <stdio.h>

int main()
{

  int size;

  printf("How many digits you want to count: ");
  scanf("%d", &size);

  int ara[size];
  int i;

  for (i = 0; i < size; i++)
  {
    scanf("%d", &ara[i]);
  }

  int even_count = 0;
  int odd_count = 0;

  for (i = 0; i < size; i++)
  {
    if (ara[i] % 2 == 0)
    {
      even_count++;
    }
    else
    {
      odd_count++;
    }
  }

  printf("Found %d even numbers\n", even_count);
  printf("Found %d odd numbers\n", odd_count);

  return 0;
}