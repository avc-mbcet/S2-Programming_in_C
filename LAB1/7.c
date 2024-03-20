#include <stdio.h>

int main() {
  int first = 0, second = 0, input;
  while (1) {
    printf("Input number\n");
    scanf("%d", &input);
    if (input > first) {
      second = first;
      first = input;
    } else if (input > second) {
      second = input;
    }
    printf("Do you want to input more numbers? 1 or 0\n");
    scanf("%d", &input);
    if (input == 1) {
      continue;
    } else {
      printf("Second largest number is %d\n", second);
      break;
      return 0;
    }
  }
}
