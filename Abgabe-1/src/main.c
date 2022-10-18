/*
 * main.c
 *
 *  Created on: 14.10.2022
 *      Author: student
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int squareSum(int n);
void printTime(int stunden, int minuten, int sekunden);
void printTimeFromCount(int count);
void printAllPossibleNumbers(int n);
void checkPalindrom(int n);
void rechteck(unsigned int breite, unsigned int hoehe, char c);
void sanduhr(unsigned int b, char c);

int main(void)
{
	printf("Abgabe 1: 28.10.22 \n");
	
	printf("QS: %d \n", squareSum(123456789));

	printTime(12, 9, 43);

	printTimeFromCount(24060);

	//printAllPossibleNumbers(4);

	checkPalindrom(112232211);
	
	rechteck(4,6,'x');

	printf("\n");

	sanduhr(19, 'x');



	return EXIT_SUCCESS;
}
