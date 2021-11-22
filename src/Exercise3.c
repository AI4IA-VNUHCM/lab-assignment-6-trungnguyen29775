/*
3. Receive a string, find the shortest and longest word in that string.
Ex:
 __________________________________________________________
| Input: "This is a string with shortest and longest word" |
| Output: Shortest word: a                                 |
|         Longest word: shortest                           |
|__________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex3(char *str){
	//Your codes here
	int count = 0;
	int min = strlen(str)-1;
	int max = 1;
	char MaxChar[100];
	char MinChar[100];
	for (int i = 0; i <=strlen(str); i++)
	{
		if (str[i] != ' '  && str[i]!='\0')
			count += 1;
		else
		{
			if (min > count)
			{
				int len = 0;
				for (int j = i - count; j < i; j++)
				{
					MinChar[len] = str[j];
					len += 1;
				}
				min = count;
			}
			if (max < count)
			{
				int len = 0;
				for (int j = i - count; j < i; j++)
				{
					MaxChar[len] = str[j];
					len += 1;
				}
				max = count;
			}
			count = 0;
		}
	}
	printf("Shortest word: ");
	for(int i=0;i<min;i++)
		printf("%c", MinChar[i]);
	printf("\n");
	printf("Longest word: ");
	for (int i = 0; i < max; i++)
		printf("%c", MaxChar[i]);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	
	Ex3(testcase);
	
	return 0;
}
