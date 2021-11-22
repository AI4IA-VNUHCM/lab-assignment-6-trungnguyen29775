/*
1. Receive a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: one thousand two hundred thirty four   |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void OutputNum(int n)
{
	switch (n)
	{
	case 1:
		printf("one ");
		break;
	case 2:
		printf("two ");
		break;
	case 3:
		printf("three ");
		break;
	case 4:
		printf("four ");
		break;
	case 5:
		printf("five ");
		break;
	case 6:
		printf("six ");
		break;
	case 7:
		printf("seven ");
		break;
	case 8:
		printf("eight ");
		break;
	case 9:
		printf("night ");
		break;
	default:
		break;
	}
}

void OutputDigit(int n)
{
	switch (n)
	{
	case 3:
		printf("thousand ");
		break;
	case 2:
		printf("hundred ");
		break;
	default:
		break;
	}
}

void Ex1(int n) {
	//Your codes here
	int count = 0;
	int arr[100];
	do
	{
		arr[count] = n % 10;
		count += 1;
		n /= 10;
	} while (n > 0);
	for (int i = count - 1; i >= 0; i--)
	{
		if (i ==1)
		{
			if (arr[i] == 1)
			{
				switch (arr[i - 1])
				{
				case 0:
					printf("ten ");
					break;
				case 1:
					printf("eleven ");
					break;
				case 2:
					printf("twelve ");
					break;
				case 3:
					printf("thirteen ");
					break;
				case 4:
					printf("fourteen ");
					break;
				case 5:
					printf("fifteen ");
					break;
				case 6:
					printf("sixteen ");
					break;
				case 7:
					printf("seventeen ");
					break;
				case 8:
					printf("eighteen ");
					break;
				case 9:
					printf("nighteen ");
					break;
				}
			}
			else
			{
				switch (arr[i])
				{
				case 2:
					printf("twenty ");
					OutputNum(arr[i - 1]);
					break;
				case 3:
					printf("thirty ");
					OutputNum(arr[i - 1]);
					break;
				case 4:
					printf("fourty ");
					OutputNum(arr[i - 1]);
					break;
				case 5:
					printf("fifty ");
					OutputNum(arr[i - 1]);
					break;
				case 6:
					printf("sixty ");
					OutputNum(arr[i - 1]);
					break;
				case 7:
					printf("seventy ");
					OutputNum(arr[i - 1]);
					break;
				case 8:
					printf("eighty ");
					OutputNum(arr[i - 1]);
					break;
				case 9:
					printf("nighty ");
					OutputNum(arr[i - 1]);
					break;
				}
			}
			
		}
		if(i>1)
		{
			OutputNum(arr[i]);
			OutputDigit(i);
		}
	}

}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	
	return 0;
}
