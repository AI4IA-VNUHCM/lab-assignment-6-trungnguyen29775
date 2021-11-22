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
void Ex2(int n, char* str[]) {
	//Your codes here
	for(int i=0;i<n-1;i++)
		for (int j = i + 1; j < n; j++)
		{
			if (Strcmp(str[i], str[j]) == 1)
			{
				char temp[100];
				for (int e = 0; i < strlen(str[i]); i++)
					temp[e] = str[i][e];
				for (int e = 0; e < strlen(str[j]); e++)
				{
					str[i][e] = str[j][e];
					str[i][strlen(str[j])] = '\0';
				}
				for (int e = 0; e < strlen(str[j]); e++)
				{
					str[j][e] = str[i][e];
					str[j][strlen(str[i])] = '\0';
				}
			}
		}
	for (int i = 0; i < n; i++)
		printf("%s ", str[i]);
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
