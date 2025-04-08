#include "binary_search.h"

int binary_search(int *arr, int length, int search_num) {
  int low_index = 0;
  int high_index = length;

  while (low_index <= high_index) {
    int mid_index = low_index + ((high_index - low_index) / 2);
    int guess_num = arr[mid_index];

    if (guess_num == search_num) {
      return mid_index;
    } else if (guess_num > search_num) {
      // guess is too low
      high_index = mid_index - 1;
    } else {
      // guess is too high
      low_index = mid_index + 1;
    }
  }

  return SEARCH_FAILURE;
}
