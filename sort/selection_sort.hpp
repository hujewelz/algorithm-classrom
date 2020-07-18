#ifndef ALGORITHM_SELECTION_SORT_H
#define ALGORITHM_SELECTION_SORT_H

#include <iostream>

template <typename T>
void selectionSort(T *arr, int n) {
  for (int i = 0; i < n; i++) {
    // 查找 (i, n)区间内的最小值
    int minIndex = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }
    std::swap(arr[i], arr[minIndex]);
  }
}

template <typename T>
void selectionSortC(T *arr, int n, bool (*compare)(T, T)) {
  for (int i = 0; i < n; i++) {
    int index = i;
    for (int j = i + 1; j < n; j++) {
      if (compare(arr[j], arr[index])) {
        index = j;
      }
    }
    swap(arr[i], arr[index]);
  }
}

template <typename T>
bool _less(T a, T b) {
  return a < b;
}

template <typename T>
bool larger(T a, T b) {
  return a > b;
}

#endif  // ALGORITHM_SELECTION_SORT_H