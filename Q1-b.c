//C program to reverse the string in C using loops
#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
	int len = strlen(str);

	for (int i = 0, j = len - 1; i <= j; i++, j--) {
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}

	printf("Reversed string is: %s", str);
	return 0;
}
