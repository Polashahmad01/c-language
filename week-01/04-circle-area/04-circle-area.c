#include <stdio.h>

int main()
{

  int radius;

  printf("Enter the radius of a circle: ");
  scanf("%d", &radius);

  float area;
  area = 3.14159 * radius * radius;

  printf("The area of that circle is: %f", area);

  return 0;
}