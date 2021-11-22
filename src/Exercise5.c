/*
5. Given a string containing just the characters '(', ')', '{', '}', '[' and ']',
determine if the input string is valid. The brackets must close in the correct order.
Ex:
 ________________________
| Input: "{([])}"        |
| Output: Valid!         |
| Input: "{[)}"          |
| Output: Invalid!       |
|________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex5(char *str[]){
	//Your codes here
	int kt = 0;	
	for (int i = 0; i < strlen(str)/2; i++)
	{
		int acii1 = str[i];
		int acii2 = str[strlen(str) - i - 1];
		if (acii1!=acii2-2 && str[i]!='(')
			kt = 1;
		if (str[i] == '(' and acii1 != acii2 - 1)
			kt = 1;
	}
	if (kt == 1)
		printf("Invalid");
	else
		printf("Valid");
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex5(testcase);
	return 0;
}
