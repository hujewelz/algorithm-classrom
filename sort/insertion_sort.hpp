#ifndef ALGORITHM_INSERTION_SORT_H
#define ALGORITHM_INSERTION_SORT_H

#include <iostream>

template <typename T>
void insertionSort(T *arr, int n) {
  assert(n > 1);
  for (int i = 1; i < n; i++) {
    T value = arr[i];
    int j = i - 1;
    for (; j >= 0; j--) {
      if (arr[j] > value) {
        arr[j + 1] = arr[j];
      } else {
        break;
      }
    }
    arr[j + 1] = value;
  }
}

#endif  // ALGORITHM_INSERTION_SORT_H