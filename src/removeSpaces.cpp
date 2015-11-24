/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/
#include<string.h>
char removeSpaces(char *str) {


	int tempIndex = 0;
	int k =0;
	

	if (str == NULL)
		return '\0';
	
	while (str[k] != '\0'){

		//value = (int)str[k];
		//printf("\n%d\n", value);

		if (str[k] == ' '){
			k++;
			continue;
		}
		else{
			
			str[tempIndex++] = str[k];
			k++;
			continue;
		}
		
	}
	
	str[tempIndex] = '\0';
	
}