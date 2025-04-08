#include <stdio.h>
#include <stdlib.h>

#include "binary_search.h"

int main() {
  printf("Testing binary search\n");

  // testing small array
  int small_array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  int index_got = binary_search(small_array, 10, 3);
  int index_wanted = 2;

  if (index_got == -1) {
    printf("binary search failed to find anything.\n");
    return EXIT_FAILURE;
  } else if (index_got != index_wanted) {
    printf("binary search found wrong index. expected %d, got %d\n",
           index_wanted, index_got);
    return EXIT_FAILURE;
  }

  // testing larger array
  int large_array[100] = {
      1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 11, 12, 13, 14, 15, 16, 17,
      18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34,
      35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51,
      52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68,
      69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85,
      86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100};

  index_got = binary_search(large_array, 100, 76);
  index_wanted = 75;

  if (index_got == -1) {
    printf("binary search failed to find anything.\n");
    return EXIT_FAILURE;
  } else if (index_got != index_wanted) {
    printf("binary search found wrong index. expected %d, got %d\n",
           index_wanted, index_got);
    return EXIT_FAILURE;
  }

  printf("\nAll tests passed.\n");
  return EXIT_SUCCESS;
}
