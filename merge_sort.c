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
  // if statement recurses until it reaches a sorted array (one element)
  if (left < right) {
    int mid = left + (right - 1) / 2;

    // recursive calls to sort the two halves
    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);

    // merge the two halves to together
    merge(arr, left, mid, right);
  }
}
