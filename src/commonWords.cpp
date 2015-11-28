/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>
#include <malloc.h>

#define SIZE 31

void compare(char *str1, char *str2, char **res){

	int i, j, index, k;
	char tempstr[100];
	bool flag = false;
	i = 0;
	k = 0;
	int row, coll;
	row = 0;
	coll = 0;

	while (str1[i] != '\0'){


		index = 0;
		while (str1[i] != ' '&&str1[i] != '\0'){

			tempstr[index] = str1[i];
			index++;
			i++;
		}

		tempstr[index] = '\0';
		i = i + 1;
		index = 0;
		j = 0;

		while (str2[j] != '\0'&&tempstr[index]!= '\0'){

			if (tempstr[index] == str2[j]){
				flag = true;
				index++;

				if (tempstr[index] == '\0')
					break;


			}

			else{

				if (tempstr[index - 1] == str2[j - 1] && index != 0)
					index = 0;

				flag = false;
			}

			j++;

		}

		if (flag == true && tempstr[index] == '\0'){
			index = 0;
			coll = 0;
			while (tempstr[index] != '\0'){
				res[row][coll] = tempstr[index];
				index++;
				coll++;
			}
			
			res[row][coll] = '\0';
			row++;
		}
		
		
		
	}

}



char ** commonWords(char *str1, char *str2) {

	//char *res = (char*)calloc(20,sizeof(char*));
	int i = 0;
	int j = 1;
	
	//char *res = (char*)calloc(20, sizeof(char*));
	char **result;

	result = (char **)calloc(20, sizeof(char*));

	for (i = 0; i < 20; i++)
		result[i] = (char *)calloc(31, sizeof(char));

	if (str1 == NULL || str2 == NULL)
		return NULL;

	compare(str1, str2, result);

	

	if (result[0][0] == NULL)
		return NULL;
	else
		return result;
}