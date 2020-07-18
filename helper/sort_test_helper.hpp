#ifndef SORT_TEST_HELPER_H
#define SORT_TEST_HELPER_H

#include <ctime>
#include <iostream>

namespace sort {

int *genRandomArray(int n, int rangeL, int rangeR) {
  assert(rangeL < rangeR);
  int *arr = new int[n];
  srand(time(NULL));
  for (int i = 0; i < n; i++) {
    arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
  }
  return arr;
}

template <typename T>
void printArray(T arr[], int n) {
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << ", ";
  }
  std::cout << std::endl;
}

template <typename T>
bool isSorted(T *arr, int n) {
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] > arr[i + 1]) return false;
  }
  return true;
}

template <typename T>
void testSort(const std::string name, void (*sort)(T *, int), T *arr, int n) {
  clock_t start = clock();
  sort(arr, n);
  clock_t end = clock();
  assert(isSorted(arr, n));
  std::cout << name << ": " << double(end - start) / CLOCKS_PER_SEC << " s"
            << std::endl;
}

template <typename T>
T *copyArray(T *arr, int n) {
  T *res = new T[n];
  std::copy(arr, arr + n, res);
  return res;
}

}  // namespace sort

#endif  // SORT_TEST_HELPER_H