#include <stdio.h>

int sortarr(int *arr, int len) {
  for (int i = 0; i < len - 1; i++) {
    for (int j = 0; j < len - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  return arr;
}

int main() {
  int len1, len2;

  printf("Enter length of Array 1: ");
  scanf("%d", &len1);

  int arr1[len1];

  for (int i = 0; i < len1; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr1[i]);
  }

  printf("Array 1 is: ");
  for (int i = 0; i < len1; i++) {
    printf("%d ", arr1[i]);
  }

  sortarr(arr1,len1);
  printf("\nSorted array is: ");
  for (int i = 0; i < len1; i++) {
    printf("%d ", arr1[i]);
  }

  printf("\nMinimum element is: %d",arr1[0]);
  printf("\nMaximum element is: %d",arr1[len1-1]);
return 0;
}
