/*
OVERVIEW: Given a string, return the Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

int calcLen(char *str){

	int i = 0;

	while (str[i] != '\0')
		i++;

	return i;

}

char KthIndexFromEnd(char *str, int K) {
	
	int len;
	int position;

	if (!str)
		return '\0';

	if (K < 0)
		return '\0';

	len = calcLen(str);

	if (K > len-1)
		return '\0';

	else{
		position = len - K - 1;

		return str[position];

	}

}