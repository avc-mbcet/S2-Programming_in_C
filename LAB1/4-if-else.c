#include <stdio.h>

int main() {
  int grade;
  printf("Enter grade\n");
  scanf("%d", &grade);
  if (grade >= 90) {
    printf("Grade is A+\n");
  } else if (grade >= 80) {
    printf("Grade is A\n");
  } else if (grade >= 70) {
    printf("Grade is B\n");
  } else if (grade >= 60) {
    printf("Grade is C\n");
  } else if (grade >= 50) {
    printf("Grade is D\n");
  } else {
    printf("Grade is F\n");
  }
}
