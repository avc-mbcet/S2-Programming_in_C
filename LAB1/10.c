#include <stdio.h>

int main() {
  int size;
  printf("Enter size of the array\n");
  scanf("%d", &size);
  int array[size], i, j, temp;
  printf("Enter values of array\n");
  for (i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }
  for (i = 0; i < size; i++) {
    for (j = 0; j < size; j++) {
      if (array[i] < array[j]) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      } else {
        continue;
      }
    }
  }
  for (i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  return 0;
}
