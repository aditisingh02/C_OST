#Write a program to reverse a string without using any built-in functions.

#include <stdio.h>
#define NO_OF_CHARS 256


int areAnagram(char* str1, char* str2)
{

	int count1[NO_OF_CHARS] = { 0 };
	int count2[NO_OF_CHARS] = { 0 };
	int i;

	for (i = 0; str1[i] && str2[i]; i++) {
		count1[str1[i]]++;
		count2[str2[i]]++;
	}

	if (str1[i] || str2[i])
		return 0;

	for (i = 0; i < NO_OF_CHARS; i++)
		if (count1[i] != count2[i])
			return 0;

	return 1;
}

int main()
{
	char str1[100],str2[100];

    printf("Enter string 1: ");
    scanf("%s",str1);

    printf("Enter string 2: ");
    scanf("%s",str2);

	if (areAnagram(str1, str2))
		printf("\nThe two strings are anagram of each other");
	else
		printf("\nThe two strings are not anagram of each other");
	return 0;
}
