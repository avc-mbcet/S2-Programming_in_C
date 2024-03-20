#include <stdio.h>

int main() {
  int grade;
  printf("Enter Grade\n");
  scanf("%d", &grade);
  switch (grade / 10) {
  case 10:
  case 9:
    printf("Grade A+");
    break;
  case 8:
    printf("Grade A");
    break;
  case 7:
    printf("Grade B");
    break;
  case 6:
    printf("Grade C");
    break;
  case 5:
    printf("Grade D");
    break;
  case 4:
  case 3:
  case 2:
  case 1:
  case 0:
    printf("Grade F");
    break;
  default:
    printf("Something went wrong");
    break;
  }
  return 0;
}
