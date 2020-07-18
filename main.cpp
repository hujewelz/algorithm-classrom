#include <iostream>

#include "insertion_sort.hpp"
#include "selection_sort.hpp"
#include "sort_test_helper.hpp"

int main(int argc, char *argv[]) {
  int n = 10000;
  int *arr = sort::genRandomArray(n, 1, n);
  int *arr2 = sort::copyArray(arr, n);

  sort::testSort("选择排序", selectionSort, arr, n);
  sort::testSort("插入排序", insertionSort, arr2, n);

  delete[] arr;
  delete[] arr2;
  return 0;
}