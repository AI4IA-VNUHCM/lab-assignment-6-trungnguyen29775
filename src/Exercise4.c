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
		i += 1;
	
	while (str[j] == ' ')
	{
		len -= 1;
		j = len - 1;
	}
	for (int e = i; e < len-1; e++)
	{
		if (str[e] == ' ' && str[e + 1] == ' ')
			str[e] = '\0';
	}
	for (int e = i; e < len; e++)
		if(str[e]!='/0')
			printf("%c", str[e]);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex4(testcase);

	return 0;
}