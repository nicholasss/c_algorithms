#include "selection_sort.h"

void selection_sort(int *arr, int length) {

  // step through i-last
  for (int i = 0; i < length; i++) {
    int min_index = i;
    int temp;

    // step through the remaining to find the min
    for (int j = i + 1; j < length; j++) {
      if (arr[j] < arr[min_index]) {
        min_index = j;
      }
    }

    // swamp the min and i
    temp = arr[i];
    arr[i] = arr[min_index];
    arr[min_index] = temp;
  }
}
