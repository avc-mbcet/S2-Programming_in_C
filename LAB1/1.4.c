#include <stdio.h>

int main() {
  int height, base;
  float area;
  printf("Enter the length of base and height respectively");
  scanf("%d %d", &base, &height);
  area = base * height * 0.5;
  printf("Area of the triangle with base %d and height %d is %f\n", base,
         height, area);
  return 0;
}
