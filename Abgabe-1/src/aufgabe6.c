/*
 * palindrom.c
 *
 *  Created on: 14.10.2022
 *      Author: student
 */
#include <stdio.h>
#include <stdlib.h>


void aufgabe6(int n)
{
	int input = n;
	int posNum[20];
	int counter = 0;
	int palFlag = 1;

	while(n > 0)
	{
		posNum[counter] = n % 10;
		n /= 10;
		counter++;
	}


	int r = counter - 1;
	int l = 0;

	do
	{
		if (!(posNum[l] == posNum[r]))
		{
			printf("%d ist kein Palindrom \n\n", input);
			palFlag = 0;

		}
	}while(((r--) - (l++)) >= 2);

	if (palFlag)
	{
		printf("%d ist ein Palindrom \n\n", input);
	}

}

