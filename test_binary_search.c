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
    printf("binary search found wrong index. expected %d, got %d\n", 2,
           index_got);
    return EXIT_FAILURE;
  }

  // testing larger array
  int large_array[40];
  for (int i = 0; i <= 39; i++) {
    large_array[i] = i + 1;
  }

  index_got = binary_search(large_array, 40, 38);
  index_wanted = 37;

  if (index_got == -1) {
    printf("binary search failed to find anything.\n");
    return EXIT_FAILURE;
  } else if (index_got != index_wanted) {
    printf("binary search found wrong index. expected %d, got %d\n", 37,
           index_got);
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}
