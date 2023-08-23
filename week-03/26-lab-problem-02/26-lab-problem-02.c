#include <stdio.h>

int main()
{

  int students, i, j, a, counter;

  scanf("%d", &students);

  for (i = 0; i < students; i++)
  {
    int counter = 0;

    for (j = 0; j < 3; j++)
    {
      scanf("%d", &a);
      counter += a;
    }
  }

  printf("%d\n", counter);

  return 0;
}