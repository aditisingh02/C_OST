#include<stdio.h>
void transposeArray() {
int r, c, i, j;
printf("Enter number of rows: ");
scanf("%d", &r);
printf("Enter number of columns: ");
scanf("%d", &c);
int arr[r][c], *arr1[10][10];
for (i = 0; i < r; i++) {
for (j = 0; j < c; j++) {
printf("Enter term a%d%d: ", i + 1, j + 1);
scanf("%d", &arr[i][j]);
}
}
printf("\nThe Array is: \n");
for (i = 0; i < r; i++) {
for (j = 0; j < c; j++) {
printf("%d ", arr[i][j]);
}
printf("\n");
}
//copying transpose to arr1
for (i = 0; i < c; i++) {
for (j = 0; j < r; j++) {
arr1[i][j] = &arr[j][i];
}
}
printf("\nTranspose of the Array is: \n");
for (i = 0; i < c; i++) {
for (j = 0; j < r; j++) {
printf("%d ", *arr1[i][j]);
}
printf("\n");
}
}
int main() {

transposeArray();
return 0;
}
