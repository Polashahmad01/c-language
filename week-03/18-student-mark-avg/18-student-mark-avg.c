#include <stdio.h>

int main()
{

  int student;
  scanf("%d", &student);
  int i, j, k;
  int marks[2];
  int total_marks = 0;
  int avg = 0;

  for (i = 0; i < student; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &marks[j]);
    }
    for (k = 0; k < 3; k++)
    {
      total_marks += marks[k];
    }

    avg = total_marks / 3;
    printf("Average is: %d\n", avg);
    total_marks = 0;
    avg = 0;
  }

  return 0;
}