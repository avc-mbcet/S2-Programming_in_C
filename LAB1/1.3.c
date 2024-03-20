#include <stdio.h>
int main() {
  int radius;
  float area;
  printf("Input radius of the circle\n");
  scanf("%d", &radius);
  area = 3.14 * radius * radius;
  printf("Area of the circle with radius %d is %f\n", radius, area);
  return 0;
}
