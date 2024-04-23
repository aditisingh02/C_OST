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

    if (len1 % 2 == 0)
        {
        int mid1 = len1 / 2;
        int mid2 = mid1 - 1;
        printf("\nMedian is %d",((arr1[mid1] + arr1[mid2]) / 2));
        }

      else
        {
            int mid = len1 / 2;
            printf("\nMedian is %d",arr1[mid]);
        }
return 0;
}

