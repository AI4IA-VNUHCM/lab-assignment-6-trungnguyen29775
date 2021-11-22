/*
2. Receive n strings from the input and sort them ascendingly.
Ex:
 _________________________________________
| Input: one two three                    |
| Output: one three two                   |
|_________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int Strcmp(char str1[100], char str2[100])
{
	for(int i=0;i<strlen(str1);i++)
		for (int j = 0; j < strlen(str2); j++)
		{
			if (str1[i] > str2[i])
				return 1;
			if (str1[i] < str2[i])
				return -1;
		}
	return 0;
}

void SwapStr(char str1[100], char str2[100])
{
	char temp[100];
	for (int i = 0; i < strlen(str1); i++)
		temp[i] = str1[i];
	int i = 0;
	while (str2[i] != '\0')
	{
		str1[i] = str2[i];
		i += 1;
	}
	str1[i] = '\0';
	i = 0;
	while (temp[i] != '\0')
	{
		str2[i] = temp[i];
		i += 1;
	}
	str2[i] = '\0';
}

int LengStr(char str[100])
{
	int len = 0;
	while (str[len] != '\0')
		len += 1;
	return len;
}
void Ex2(int n, char* str[]) {
	//Your codes here
	for(int i=0;i<n-1;i++)
		for (int j = i + 1; j < n; j++)
		{
			if (Strcmp(str[i], str[j]) == 1)
				SwapStr(str[i], str[j]);
		}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < LengStr(str[i]); j++)
			printf("%c", str[i][j]);
		printf(" ");
	}
}
int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	char *testcase[argc];
	int i;
	for(i=0; i<argc; i++){
		testcase[i] = argv[i+1];
	}
	
	Ex2(argc, testcase);
	
	return 0;
}
