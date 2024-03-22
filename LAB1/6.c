#include <math.h>
#include <stdio.h>

int main() {
  int a, s = 0, b, c = 0;
  printf("Enter Number\n");
  scanf("%d", &a);
  b = a;
  while (a > 0) {
    a = a / 10;
    c = c + 1;
  }
  a = b;
  while (a > 0) {
    s = s + pow((a % 10), c);
    a = a / 10;
  }
  if (b == s) {
    printf("armstrong number\n");
  } else {
    printf("not armstrong number\n");
  }
}
