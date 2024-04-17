#include <stdio.h>

int main() {
  int n;
  printf("Enter the size of array\n");
  scanf("%d", &n);
  int array[n], i, searchterm, flag = 0;
  printf("Enter n values\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }
  printf("Enter search term\n");
  scanf("%d", &searchterm);
  for (i = 0; i < n; i++) {
    if (array[i] == searchterm) {
      flag = 1;
      break;
    }
  }
  if (flag == 1) {
    printf("The search term is at index %d\n", i);
  } else {
    printf("The search term is not in the array\n");
  }
}
