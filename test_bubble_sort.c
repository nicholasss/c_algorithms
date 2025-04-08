#include <stdbool.h>
#include <stdio.h>

#include "bubble_sort.h"

bool array_compare(int *arr1, int *arr2, int length) {
  for (int i = 0; i < length; i++) {
    if (arr1[i] != arr2[i]) {
      return false;
    }
  }
  return true;
}

int main() {
  printf("Testing Bubble Sort\n");

  // testing small array
  int small_array[10] = {9, 2, 4, 10, 8, 5, 7, 6, 1, 3};
  int small_want[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  bubble_sort(small_array, 10);
  if (!array_compare(small_array, small_want, 10)) {
    printf("selection sort failed on the small array.\n");
    return EXIT_FAILURE;
  }

  // testing large array
  int large_array[100] = {
      99, 34, 24, 2,  62, 81, 80, 11, 65, 72, 21, 45, 10, 27, 84,  55, 78,
      26, 53, 6,  91, 95, 98, 69, 89, 42, 28, 15, 94, 52, 35, 92,  73, 64,
      85, 31, 5,  77, 93, 17, 46, 50, 75, 20, 40, 36, 83, 60, 8,   32, 25,
      37, 18, 63, 61, 97, 1,  96, 86, 67, 49, 76, 29, 82, 57, 66,  30, 74,
      43, 48, 13, 87, 7,  54, 59, 56, 79, 38, 14, 51, 70, 4,  100, 71, 3,
      22, 68, 90, 88, 19, 41, 44, 33, 47, 39, 9,  16, 58, 12, 23};
  int large_want[100] = {
      1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 11, 12, 13, 14, 15, 16, 17,
      18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34,
      35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51,
      52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68,
      69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85,
      86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100};

  bubble_sort(large_array, 100);
  if (!array_compare(large_array, large_want, 100)) {
    printf("selection sort failed on the large array.\n");
    return EXIT_FAILURE;
  }

  printf("\nAll tests passed.\n");
  return EXIT_SUCCESS;
}
