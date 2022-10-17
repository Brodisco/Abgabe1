/*
 * verifyCode.c
 *
 *  Created on: 14.10.2022
 *      Author: student
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printAllPossibleNumbers(int n)
{
	int maxVal = (int) pow(10, n);
	for (int i = 0; i < maxVal; i++)
	{
		printf("%04d \n", i);
	}
}


