#include "merge_sort.h"
#include <stdio.h>

// merges the two subarrays
// first is:  arr[left...mid]
// second is: arr[mid + 1...right]
void merge(int arr[], int left, int mid, int right) { return; }

// this is the function that is called
// left is the first index of array
// right is the last index of array
void merge_sort(int arr[], int left, int right) {
  // divide the list into halves until it cannot be divided anymore
  // finding the midpoint of array

  if (left < right) {
    int mid = left + (right - 1) / 2;

    // sort the first and second halves
    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);
    merge(arr, left, mid, right);
  }

  // conquer the subdivisions by sorting them using the algorithm
  //
  // merge the sorted subarrays until they are back in order

  return;
}
