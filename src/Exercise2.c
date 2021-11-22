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

int LengStr(char str[100])
{
	int len = 0;
	while (str[len] != '\0')
		len += 1;
	return len;
}

void SwapStr(char str1[100], char str2[100])
{
	char temp[100];
	for (int i = 0; i <LengStr(str1); i++)
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
