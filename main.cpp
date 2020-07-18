#include <iostream>

#include "selection_sort.hpp"
#include "sort_test_helper.hpp"

int main(int argc, char *argv[]) {
  int n = 10000;
  int *arr = sort::genRandomArray(n, 1, n);
  sort::testSort("选择排序", selectionSort, arr, n);

  delete[] arr;
  return 0;
}