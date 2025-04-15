#include "print_array.h"

void print_array(int arr[], size_t length) {
  if (length <= 0) {
    return;
  }

  printf("Array:\n");
  printf("%d", arr[0]);

  for (int i = 1; i < length; i++) {
    printf(", %d", arr[i]);
  }
}
