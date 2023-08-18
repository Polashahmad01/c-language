#include <stdio.h>

int main()
{

  unsigned int N;
  scanf("%d", &N);

  int array[N];

  int i, j;

  for (i = 0; i < N; i++)
  {
    scanf("%d", &array[i]);
  }

  int uniqueValue = array[0];
  int isUnique = 1;

  for (j = 0; j < N; j++)
  {
    if (array[j] != uniqueValue)
    {
      isUnique = 0;
    }
  }

  if (isUnique)
  {
    printf("YES\n");
  }
  else
  {
    printf("NO\n");
  }

  return 0;
}