#include <iostream>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int partition(int arr[], int start, int end)
{
 
    int pivot = arr[start];
 
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }
 
    // Giving pivot element its correct position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);
 
    // Sorting left and right parts of the pivot element
    int i = start, j = end;
 
    while (i < pivotIndex && j > pivotIndex) {
 
        while (arr[i] <= pivot) {
            i++;
        }
 
        while (arr[j] > pivot) {
            j--;
        }
 
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
 
    return pivotIndex;
}
 
void quickSort(int arr[], int start, int end)
{
 
    // base case
    if (start >= end)
        return;
 
    // partitioning the array
    int p = partition(arr, start, end);
 
    // Sorting the left part
    quickSort(arr, start, p - 1);
 
    // Sorting the right part
    quickSort(arr, p + 1, end);
}

const size_t MB = 1024*1024;
size_t MOD = 0;

unsigned char uniqueNumber () {
  static unsigned char number = 0;
  return ++number % MOD;
}

int main(int argc, char** argv) {
  if (argc < 3) {
    return 1;
  }

  size_t BLOCK_SIZE = atoi(argv[1]) * MB;
  MOD = atoi(argv[2]);

  unsigned char* garbage = (unsigned char *) malloc(BLOCK_SIZE);

  std::generate_n(garbage, BLOCK_SIZE, uniqueNumber);
  quickSort(garbage, 0, BLOCK_SIZE);

  free(garbage);

  return 0;
}
