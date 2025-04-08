#include "linear_search.h"

int linear_search(int *arr, int length, int search_num) {
  for (int i = 0; i < length; i++) {
    if (arr[i] == search_num) {
      return i;
    }
  }

  return SEARCH_FAILURE;
}
