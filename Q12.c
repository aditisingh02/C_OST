//Q12 Write a program to find the intersection of two arrays.

#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void findUnion(int arr1[], int size1, int arr2[], int size2) {
    int i = 0, j = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j])
            {
                printf("%d ", arr1[i++]);
            }
        else if (arr2[j] < arr1[i])
            {
                printf("%d ", arr2[j++]);
            }
        else
            {
                printf("%d ", arr1[i++]);
                j++;
            }
    }

    while (i < size1)
        {
            printf("%d ", arr1[i++]);
        }

    while (j < size2)
        {
            printf("%d ", arr2[j++]);
        }

    printf("\n");
}

void findIntersection(int arr1[], int size1, int arr2[], int size2) {
    int i = 0, j = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr1[i]) {
            j++;
        } else {
            printf("%d ", arr1[i++]);
            j++;
        }
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 7};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Array 1: ");
    printArray(arr1, size1);

    printf("Array 2: ");
    printArray(arr2, size2);

    printf("Union: ");
    findUnion(arr1, size1, arr2, size2);

    printf("Intersection: ");
    findIntersection(arr1, size1, arr2, size2);

    return 0;
}
