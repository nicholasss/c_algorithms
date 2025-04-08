#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "selection_sort.h"

bool array_compare(int *arr1, int *arr2, int length) {
  for (int i = 0; i < length; i++) {
    if (arr1[i] != arr2[i]) {
      return false;
    }
  }
  return true;
}

int main() {
  printf("Testing Linear Search\n");

  // testing small array
  int small_array[10] = {9, 2, 4, 10, 8, 5, 7, 6, 1, 3};

  selection_sort(small_array, 10);
  int sorted_want[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  if (!array_compare(small_array, sorted_want, 10)) {
    printf("selection sort failed on the small array.\n");
    return EXIT_FAILURE;
  }

  printf("\nAll tests passed.\n");
  return EXIT_SUCCESS;
}
