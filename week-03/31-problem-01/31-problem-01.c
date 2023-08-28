#include <stdio.h>

int main()
{

  int N;
  scanf("%d", &N);

  if (N <= 0)
  {
    return 0;
  }

  int fibonacci_sequence[N];
  fibonacci_sequence[0] = 0;

  if (N > 1)
  {
    fibonacci_sequence[1] = 1;
  }

  for (int i = 2; i < N; i++)
  {
    fibonacci_sequence[2] = fibonacci_sequence[i - 1] + fibonacci_sequence[i - 2];
  }

  for (int i = 0; i < N; i++)
  {
    printf("%d ", fibonacci_sequence[i]);
  }

  return 0;
}
