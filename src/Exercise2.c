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
void Ex2(int n, char *str[]){
	//Your codes here
	char **StrArr[100];
	int count=0;
	while(str[count]!=" ")
		count+=1;
	for(int i=0;i<count;i++)
		StrArr[0][i]=str[i];
	count=0;
	for(int i=1;i<n;i++)
	{
		for(int j=count;j<strlen(str);j++)
			if(str[j]==" "){
				int Len=0;
				while(str[Len]!=" " || str[Len]!= '\0')
					Len+=1;
				for(int e=0;e<Len;e++)
					StrArr[i][e]=str[e+j+1];
			}
	}
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(StrArr[i],StrArr[j])>0)
			{
				char *temp[100];
				strcpy(temp,StrArr[i]);
				strcpy(StrArr[i],StrArr[j]);
				strcpy(StrArr[j],temp);
			}
		}
	for(int i=0;i<n;i++)
		printf("%s ",StrArr[i]);
	
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
