#include <stdio.h>
int main() {
  int n;
  printf("Enter the size of array\n");
  scanf("%d", &n);
  int array[n], i, sum = 0, average;
  printf("Enter n values\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }
  for (i = 0; i < n; i++) {
    sum = sum + array[i];
  }
  printf("Sum is %d\n", sum);
  average = sum / n;
  printf("Average is %d\n", average);
  return 0;
}
