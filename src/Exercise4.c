/*
4. Receive a string, remove all blank spaces at begin and
end of the string and leave only one blank space between words.
Ex:
 ________________________________________________
| Input: "  this  is an   unformatted  string "  |
| Output: this is an unformatted string          |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex4(char *str){
	//Your codes here
	int len = strlen(str);
	int i = 0;
	int j = len-1;
	while (str[i] == ' ')
	{
		for (int e = 0; e < len - 1; e++)
			str[e] = str[e] + 1;
		len -= 1;
	}
	while (str[j] == ' ')
	{
		len -= 1;
		j = len-1;
	}
	char str2[100];
	for (int e = 0; i < len; e++)
		str2[e] = str[e];
	int check = 0;
	for (int i = 0; i < len; i++)
	{
		if (str[i] == ' ' && str[i + 1] == ' ')
		{
			if (check == 1)
			{
				for (int e = i-1; e < len - 1; e++)
					str2[e] = str2[e] + 1;
				len -= 1;
			}
			else
			{
				for (int e = i ; e < len - 1; e++)
					str2[e] = str2[e] + 1;
				len -= 1;
			}
			check = 1;
		}
	}
	for (int e = 0; e < len; e++)
		printf("%c", str[i]);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex4(testcase);

	return 0;
}