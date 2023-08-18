#include <stdio.h>

int main()
{

  unsigned int N;
  scanf("%d", &N);

  int array[N];

  int i, x;

  for (i = 0; i < N; i++)
  {
    scanf("%d", &x);
    array[i] = x;
  }

  int query;
  scanf("%d", &query);

  int j, index, value;

  for (j = 0; j < query; j++)
  {
    scanf("%d", &index);
    scanf("%d", &value);
    array[index] += array[i] + value;
  }

  int k;

  for (k = 0; k < N; k++)
  {
    printf("%d ", array[k]);
  }

  return 0;
}