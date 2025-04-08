#ifndef BINARY_SEARCH
#define BINARY_SEARCH

#import <stdbool.h>
#import <stdlib.h>

#define SEARCH_FAILURE -1

// returns int
// takes pre-sorted array, array length, and integer to find
// if return val is -1, it was not found
int binary_search(int *arr, int length, int search_num);

#endif // BINARY_SEARCH
