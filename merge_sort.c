#include "merge_sort.h"
#include <stdio.h>

// merges the two subarrays, actually does sorting on merge
// first is:  arr[left...mid]
// second is: arr[mid + 1...right]
void merge(int arr[], int left, int mid, int right) {
  int arrALength = mid - left + 1;
  int arrBLength = right - mid;

  // create temp arrays and copy data to them
  int arrA[arrALength], arrB[arrBLength];
  for (int i = 0; i < arrALength; i++) {
    arrA[i] = arr[left + i];
  }
  for (int i = 0; i < arrBLength; i++) {
    arrB[i] = arr[mid + 1 + i];
  }

  // merge temp arrays back into arr[left...right]
  int x = 0;
  int y = 0;
  int z = left;
  while (x < arrALength && y < arrBLength) {
    if (arrA[x] <= arrB[y]) {
      arr[z] = arrA[x];
      x++;
    } else {
      arr[z] = arrB[y];
      y++;
    }
    z++;
  }

  // copy remaining elements of arrA
  while (x < arrALength) {
    arr[z] = arrA[x];
    x++;
    z++;
  }

  // copy remaining elements of arrB
  while (y < arrBLength) {
    arr[z] = arrB[y];
    y++;
    z++;
  }
}

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
