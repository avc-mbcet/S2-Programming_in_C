#include <stdio.h>
int main() {
  int a, b, sum;
  printf("Input two numbers\n");
  scanf("%d %d", &a, &b);
  sum = a + b;
  printf("Sum of %d and %d is %d\n", a, b, sum);
  return 0;
}
