#include <iostream>
using namespace std;
int binarySearch(int array[], int x, int low, int high) {
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;
  else
      high = mid  -1;
  }
 return -1;
}
int main(void) {
  int array[] = {5, 28, 99, 23, 77, 88, 999};
  int x = 999;
  int n = sizeof(array) / sizeof(array[0]);
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
}
