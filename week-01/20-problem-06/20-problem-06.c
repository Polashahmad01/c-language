#include <stdio.h>

int main()
{

  int mark, bonus_mark, total_mark = 0;

  printf("Enter your mark and also bonus mark: ");
  scanf("%d%d", &mark, &bonus_mark);

  if (mark > 0 && bonus_mark > 0)
  {
    total_mark = mark + bonus_mark;
    if (total_mark >= 100)
    {
      printf("YES\n");
    }
    else
    {
      printf("NO\n");
    }
  }

  return 0;
}