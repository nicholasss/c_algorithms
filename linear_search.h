#ifndef LINEAR_SEARCH
#define LINEAR_SEARCH

#include <stdlib.h>

#define SEARCH_FAILURE -1

// returns search_failure (-1) if the num was not found
// takes array, length of array, and the number being looked for
//
// The array does not need to necesarily need to be sorted
int linear_search(int *arr, int length, int search_num);

#endif // LINEAR_SEARCH
