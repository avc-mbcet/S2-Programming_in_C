#include <stdio.h>

int main() {
  int N, i = 2, flag = 1;
  printf("Enter natural number\n");
  scanf("%d", &N);
  while (i < (N / 2)) {
    if (N % i == 0) {
      flag = 0;
      break;
    } else {
      i = i + 1;
    }
  }
  if (flag == 1) {
    printf("Prime Number");
  } else {
    printf("Composite Number");
  }
  return 0;
}
