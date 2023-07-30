#include <stdio.h>

int main()
{

  int mark;

  printf("Enter your mark: ");
  scanf("%d", &mark);

  if (mark > 0)
  {
    if (mark <= 32)
    {
      printf("F\n");
    }
    else if (mark >= 33 && mark <= 39)
    {
      printf("D\n");
    }
    else if (mark >= 40 && mark <= 49)
    {
      printf("C\n");
    }
    else if (mark >= 50 && mark <= 59)
    {
      printf("B\n");
    }
    else if (mark >= 60 && mark <= 69)
    {
      printf("A-\n");
    }
    else if (mark >= 70 && mark <= 79)
    {
      printf("A\n");
    }
    else if (mark >= 80 && mark <= 100)
    {
      printf("A+\n");
    }
  }

  return 0;
}