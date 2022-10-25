/*
 * squareSum.c
 *
 *  Created on: 14.10.2022
 *      Author: student
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
void aufgabe2(int n)
{
	int squareSum = 0;
	const int maxLen = 20;
	int num;
	int pot;

	for(int i = 1; i <= maxLen; i++)
	{
		pot =(int)pow(10, (maxLen - i));
		num = (int)n / pot;
		squareSum += num;
		if (num)
		{
			n = n % pot;
		}
	}

	squareSum += n;

	printf("Quersumme: %d \n", squareSum);
}
*/

void aufgabe2(int n)
{
	int squareSum = 0;
	int input = n;

	while(n > 0)
	{
		squareSum += n % 10;
		n /= 10;
	}

	printf("Quersumme: %d -> %d \n\n", input, squareSum);
}

