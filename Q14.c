//Q14 Implement a program to convert a decimal number to binary without using the built-in functions.
#include <stdio.h>

int main() {
  int num, remainder, binary = 0, i = 1;

  printf("Enter a decimal number: ");
  scanf("%d", &num);

  if (num < 0) {
    printf("Negative numbers not supported. Enter a positive integer.\n");
    return 1;
  }

  // Convert to binary
  while (num != 0) {
    remainder = num % 2;
    binary += remainder * i;
    num /= 2;
    i *= 10;
  }

  printf("Binary equivalent: %d\n", binary);
  return 0;
}
