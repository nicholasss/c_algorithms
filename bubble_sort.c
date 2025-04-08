
#include "bubble_sort.h"

void bubble_sort(int arr[], size_t length) {
  // outer loop
  bool swapped = false;
  for (int i = 0; i < length - 1; i++) {
    swapped = false;

    // inner loop
    for (int j = 0; j < length - i - 1; j++) {

      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
        swapped = true; // something was 'bubbled up'
      }
    }

    // if every number is sorted, no swaps on final loop
    if (swapped == false) {
      break;
    }
  }
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
