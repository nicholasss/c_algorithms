#ifndef BUBBLE_SORT
#define BUBBLE_SORT

#include <stdbool.h>
#include <stdlib.h>

// sorts the array using bubble sort
// Bubble sort is called this, becuase while its running,
//   the largest numbers will 'bubble' to the end of the array.
void bubble_sort(int arr[], size_t length);

// swaps two integers
void swap(int *a, int *b);

#endif // BUBBLE_SORT
