/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string accordingo  to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void str_words_in_rev(char *input, int len){

	int i = 0;
	int index = 0;
	char tempstr[30];
	int tempLen;
	int count;
	int j = len - 1;

	int wordlen = 0;
	while (i < len){
		if (input[i] != ' ')
			wordlen++;
		i++;
	}
	i = 0;

	while (i < wordlen){

		index = 0;
		while (input[index] != ' '&&i != len){
			tempstr[index] = input[index];
			index++;
			i++;
			//	printf("\n%d",i);
		}

		if (i == wordlen)
			break;

		tempstr[index] = '\0';
		tempLen = index;

		count = 0;
		while (index < j){
			//printf("\n%c",str[index+1]);
			input[count] = input[index + 1];
			index++;
			count++;
		}

		count = 0;
		index = tempLen - 1;
		while (count < tempLen && index>=0 && j>=0){

			input[j] = tempstr[index];
			index--;
			count++;
			j--;

		}

		input[j--] = ' ';
	}
}
