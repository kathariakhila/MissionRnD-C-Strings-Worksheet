/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>
#include<math.h>

void reverse(char *str, int len)
{
	int i = 0, j = len - 1, temp;
	while (i<j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++; j--;
	}
}

int intToStr(int number, char str[], int decimal)
{
	int i = 0;
	while (number)
	{
		str[i++] = (number % 10) + '0';
		number = number / 10;
	}

	while (i < decimal)
		str[i++] = '0';

	reverse(str, i);
	str[i] = '\0';
	return i;
}


void conversion(float n, char *str, int point)
{
	int integer;
	int i;

	float floating;

	if (n < 0){
		str[0] = '-';
		integer = -n;
		floating = n + integer;
		floating = -floating;

		printf("\n%d : %f", integer, floating);

		i = intToStr(integer, str + 1, 0);

		if (point != 0)
		{
			str[i + 1] = '.';

			floating = floating * pow((double)10, point);

			intToStr(floating, str + i + 2, point);
		}

	}

	else{

		integer = n;
		floating = n - integer;

		i = intToStr(integer, str, 0);


		if (point != 0)
		{
			str[i] = '.';

			floating = floating * pow((double)10, point);

			intToStr(floating, str + i + 1, point);
		}

	}
}



void number_to_str(float number, char *str,int afterdecimal){


	conversion(number,str, afterdecimal);
	
}
